//-------------------------------------------------------------------
//File p02.cpp contains functions that process command line file names
//and interface with the lex-generated scanner
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//C++ Standard include files
//--------------------------------------------------------------------
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <string>
using namespace std;
//--------------------------------------------------------------------
//Application include files
//--------------------------------------------------------------------
#include "p02lex.h"
#include "p02par.h"
//--------------------------------------------------------------------
//Externals
//--------------------------------------------------------------------
ofstream tfs; //trace file stream
//--------------------------------------------------------------------
//BadSuffixException
//--------------------------------------------------------------------
struct BadSuffixException
{
    BadSuffixException(char *fn)
    {
        cout << endl;
        cout << "Input file \"" << fn << "\" does not have a .pas suffix.";
    }
};
//--------------------------------------------------------------------
//--------------------------------------------------------------------
class FileNameSuffix
{
    char *prefix;

public:
    FileNameSuffix(char *fn)
    {
        char *p = strstr(fn, ".pas");
        if (!p)
            throw BadSuffixException(fn);
        int n = p - fn;
        if (n + 4 != strlen(fn))
            throw BadSuffixException(fn);
        prefix = new char[strlen(fn) + 1];
        strncpy(prefix, fn, n);
        prefix[n] = 0;
    }
    ~FileNameSuffix()
    {
        if (prefix)
            delete[] prefix;
    }
    void Suffix(char *fn, const char *suffix)
    {
        strcpy(fn, prefix);
        strcat(fn, suffix);
    }
};
//--------------------------------------------------------------------
//CommandLineException
//--------------------------------------------------------------------
struct CommandLineException
{
    CommandLineException(int m, int a)
    {
        cout << endl;
        cout << "Too many file names on the command line.";
        cout << endl;
        cout << m << " file name(s) are permitted on the command line.";
        cout << endl;
        cout << a << " file name(s) appeared on the command line.";
        cout << endl;
    }
};
//--------------------------------------------------------------------
//FileException
//--------------------------------------------------------------------
struct FileException
{
    FileException(const char *fn)
    {
        cout << endl;
        cout << "File " << fn << " could not be opened.";
        cout << endl;
    }
};
//--------------------------------------------------------------------
//--------------------------------------------------------------------
void CompilerMgr(FILE *i)
{
    Parser P(i);
    int rc = P.Parse();
}
//--------------------------------------------------------------------
//Function main processes command line file names
//--------------------------------------------------------------------
int main(int argc, char *argv[])
{
    try
    {
        char inputfile[255];
        switch (argc)
        {
        case 1: //Prompt for the input file name
            cout << "Enter the input file name: ";
            cin >> inputfile;
            break;
        case 2: //Read the input file name
            strcpy(inputfile, argv[1]);
            break;
        default:
            throw CommandLineException(1, argc - 1);
            break;
        }
        FileNameSuffix F(inputfile); 
        char outputfile[255];
        F.Suffix(outputfile, ".trc");     
        FILE *inputPointer = fopen(inputfile, "r"); 
        if (!inputPointer)
            throw FileException(inputfile);
            
        tfs.open(outputfile);
        if (!tfs)
            throw FileException(outputfile);
        CompilerMgr(inputPointer);
        tfs << endl; 
        tfs.close(); 
        fclose(inputPointer);   
    }
    catch (...)
    {
        cout << endl;
        cout << "Program terminated!";
        cout << endl;
        cout << "I won't be back!";
        cout << endl;
        exit(EXIT_FAILURE);
    }
    return 0;
}