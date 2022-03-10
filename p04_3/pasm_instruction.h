//--------------------------------------------------------------------
// File pasm_instruction.h contains the interface for the 
// PasmInstruction utility class for process P-Code instructions
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
// Project:	p04.3
// Due:		March 8, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include "pasmtkn.h"
using namespace std;

class PasmInstruction {
    int opcode;
    int operand1;
    int operand2;
    char* alpha;
    
    const map<int, int> stdfuncOPMap = {
        {RDB_F, 0},
        {RDC_F, 1},
        {RDI_F, 2},
        {RDR_F, 3},
        {RLN_F, 4},
        {WRB_F, 5},
        {WRC_F, 6},
        {WRI_F, 7},
        {WRE_F, 8},
        {WRF_F, 9},
        {WRS_F, 10},
        {WRT_F, 11},
        {WLN_F, 12},
        {SQT_F, 13},
        {LN_F, 14},
        {EXP_F, 15},
    };

    public:
        PasmInstruction(int opc = 0, int op1 = 0, int op2 = 0, char* a = NULL);
        void print(ostream& output); 
        void printOPCode(ostream& output);
        void printOP1(ostream& output);
        void printOP2(ostream& output);
};