//--------------------------------------------------------------------
// File pasm_label.h contains the interface for the 
// PasmLabel utility class for processing P-Code labels
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
// Project:	p04.5
// Due:		March 31, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#ifndef pasm_label_h
#define pasm_label_h

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <vector>
#include "pasmtkn.h"

using namespace std;

class PasmLabel {
    public:
    string labelStr;
    int address;
    bool resolved;
    vector<int> refList;

    public:
        PasmLabel(string lbl = NULL, int addr = 0, bool res = false);
        void print(ostream& output);
        void addRef(int i);
};

#endif