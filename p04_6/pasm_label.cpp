//--------------------------------------------------------------------
// File pasm_label.cpp contains the implementation for the 
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
// Project:	p04.6
// Due:		April 26, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
#include "pasm_label.h"

PasmLabel::PasmLabel(string lbl, int addr, bool res) : labelStr(lbl), address(addr), resolved(res) {}

void PasmLabel::print(ostream& output) {
    output << setw(8) << left << setfill(' ') << labelStr;
    output << setw(10) << left << setfill(' ') << address;
    output << setw(10) << boolalpha << left << setfill(' ') <<  resolved;
    output << dec;
    for(int ref: refList) {
        output << ref << " ";
    }
    output << endl;
}

void PasmLabel::addRef(int i) {
  refList.push_back(i);
}