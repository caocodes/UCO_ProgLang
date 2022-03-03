#ifndef PasmFiles_h
#define PasmFiles_h 1
//----------------------------------------------------------------------------
//File PasmFiles.h defines the files required by the P-Code Assembler
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
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//struct PasmFiles defines the files needed by the P-Code Assembler 
//----------------------------------------------------------------------------
struct PasmFiles {
    FILE* s;                        //Source file
    FILE* e;                        //Executable file (binary)
    ofstream l;                     //Listing file
    ofstream t;                     //Trace file
    char* sfn;                      //Source file name
    char* efn;                      //Executable file name
    char* lfn;                      //Listing file name
    char* tfn;                      //Trace file name
    PasmFiles();                    //Default constructor
    ~PasmFiles();                   //Default destructor
    
    void Open
        (char* sn
	,char* en
	,char* ln
	,char* tn
	);
    void Close(void);
};
#endif
