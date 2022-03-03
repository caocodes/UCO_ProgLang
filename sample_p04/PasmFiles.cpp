//----------------------------------------------------------------------------
//File PasmFiles.cpp implements member functions of class PasmFiles
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
#include <iomanip>
#include <cstring>
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
#include "PasmFiles.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class PasmFiles defines the attributes of the P-Code Assembler Files
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//File exception is thrown when either the source file, the listing file, 
//or the executable file cannot be opened.
//----------------------------------------------------------------------------
struct FileException {
    FileException(char* fn)
    {   cout << endl;
        cout << "File " << fn << " could not be opened.";
        cout << endl;
    }
};
//----------------------------------------------------------------------------
//Constructor
//----------------------------------------------------------------------------
PasmFiles::PasmFiles() { }
//----------------------------------------------------------------------------
//Destructor
//----------------------------------------------------------------------------
PasmFiles::~PasmFiles()
{   /*
    if (s) fclose(s);
    if (e) fclose(e);
    if (l) l.close();
    if (t) t.close();
    */
}
//----------------------------------------------------------------------------
//Function Open opens Pasm Files
//----------------------------------------------------------------------------
void PasmFiles::Open(char* sn,char* en,char* ln,char* tn)
{   sfn=new char[strlen(sn)+1];
    strcpy(sfn,sn);
    efn=new char[strlen(en)+1];
    strcpy(efn,en);
    lfn=new char[strlen(ln)+1];
    strcpy(lfn,ln);
    tfn=new char[strlen(tn)+1];
    strcpy(tfn,tn);
    s=fopen(sfn,"r" ); if (!s) throw FileException(sfn);
    e=fopen(efn,"wb"); if (!e) throw FileException(efn);
    l.open(lfn);       if (!l) throw FileException(lfn);
    t.open(tfn);       if (!t) throw FileException(tfn);
}
//----------------------------------------------------------------------------
//Function Close closes Pasm Files
//----------------------------------------------------------------------------
void PasmFiles::Close(void)
{
    if (s) fclose(s);
    if (e) fclose(e);
    if (l) l.close();
    if (t) t.close();
}


