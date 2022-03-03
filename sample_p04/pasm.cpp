//----------------------------------------------------------------------------
//File Pasm.cpp contains function that process command line parameters 
//for the P-Code Assembler.
//----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@ucok.edu
//Date:   March, 2003
//----------------------------------------------------------------------------
//Copyright March, 2003 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
#include "pasmpar.h"
#include "PasmFiles.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//----------------------------------------------------------------------------
//Externals
//----------------------------------------------------------------------------
PasmFiles F;
//----------------------------------------------------------------------------
//CommandLineException is thrown when too many arguments appear on the 
//command line.
//----------------------------------------------------------------------------
struct CommandLineException {
    CommandLineException(int m,int a)
    {   cout << endl;
        cout << "Too many command line arguments.";
        cout << endl;
        cout << "Program Pasm accepts a maximum of " << m ;
	cout << " command line arguments.";
        cout << endl;
        cout << "You entered " << a << " arguments excluding \"Pasm\" itself.";
        cout << endl;
    }
};
//----------------------------------------------------------------------------
//InvalidSuffixException is thrown when the source file has a suffix that 
//differs from ".pcd"
//----------------------------------------------------------------------------
struct InvalidSuffixException {
    InvalidSuffixException(const char* fn)
    {   cout << endl;
        cout << "The P-Code source file (" << fn ;
	cout << ") does not have a \".pcd\" suffix.";
        cout << endl;
    }
};
//----------------------------------------------------------------------------
//Function IsValidSuffix determines if the input file name has a ".pcd" suffix
//----------------------------------------------------------------------------
bool IsValidSuffix(char* fn)
{   char* suffix=fn+strlen(fn)-4;
    return strcmp(suffix,".pcd")==0;
}
//----------------------------------------------------------------------------
//Function Prefix extracts the source file name prefix.
//----------------------------------------------------------------------------
char* Prefix(const char* fn)
{   int l=strlen(fn);
    char* prefix=new char[l-3];
    strncpy(prefix,fn,l-4);
    prefix[l-4]=0;
    return prefix;
}
//----------------------------------------------------------------------------
//Function FileName allocates storage for and creates a file name from 
//parameters prefix and suffix
//----------------------------------------------------------------------------
char* FileName(const char* prefix,const char* suffix)
{   char* fn=new char[strlen(prefix)+strlen(suffix)+1];
    strcpy(fn,prefix);
    return strcat(fn,suffix);
}   
//---------------------------------------------------------------------------
//Function main processes command line arguments.  A maximum of one command 
//line argument is permitted.  The argument is the name of the source file 
//containing P-Code instructions.  The file must have the suffix ".pcd"
//---------------------------------------------------------------------------
int main(int argc, char* argv[])
{   try {
        char sfn[255];              //Source File Name
        //-------------------------------------------------------------------
        //Obtain the source file name 
        //-------------------------------------------------------------------
        if(argc == 1){
			cout << "Enter the P-Code source file name. ";
            cin >> sfn;
		}else if(argc == 2){
			strcpy(sfn,argv[1]);
		}else{
			throw CommandLineException(1,argc-1);
		}
        //-------------------------------------------------------------------
        //Validate the source file suffix
        //-------------------------------------------------------------------
        if (!IsValidSuffix(sfn)) throw InvalidSuffixException(sfn);
        char* prefix=Prefix(sfn);   //Extract the source file name prefix
        //-------------------------------------------------------------------
        //Create executable and listing file names
        //-------------------------------------------------------------------
        char* efn=FileName(prefix,".pex");
        char* lfn=FileName(prefix,".alst");
	char* tfn=FileName(prefix,".atrc");
	F.Open(sfn,efn,lfn,tfn);    //Open files

        pasmpar P;
        P.Parse();

	F.Close();                  //Close files
		
    }   catch ( ... ) {
        cout << endl;
        cout << "Program terminated.";
        cout << endl;
        exit(EXIT_FAILURE);
    }
    return 0;
}

