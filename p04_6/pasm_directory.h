#ifndef pasm_directory_h
#define pasm_directory_h
//--------------------------------------------------------------------
// File pasm_directory.h contains the interface for the 
// PasmDirectory for storing P-Code Assembler information
//--------------------------------------------------------------------
// Author 1: Prantosh Neupane
// Student ID: *20514054
// E-Mail:	pneupane4@uco.edu
// CRN:		21808, Spring 2022
// Author 2: Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// CRN:		22708, Spring 2022
// Course:	CMSC 5023 – Programming Languages
// Project:	p04.6
// Due:		April 26, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

class PasmDirectory {
    public:
    int start = 0; // instruction address of first instruction
    int ssize = 0; // stack size
    int iaoffset = 0; // instruction array offset
    int iasize = 0; // instruction array size
    int icoffset = 0; // integer constants offset
    int icsize = 0; // integer constants size
    int rcoffset = 0; //real constants offset
    int rcsize = 0; //real constants size
    int tcoffset = 0; //set constants offset
    int tcsize = 0; //set constants size
    int scoffset = 0; // string constants offset
    int scsize = 0; // string constants size
    
    PasmDirectory(int ss, int ias, int ics, int rcs, int tcs, int scs);
    void print(ostream& o);
    void write(FILE* f);
};

#endif