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
// Project:	p04.4
// Due:		March 24, 2022
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
    
    public:
        PasmInstruction(int opc = 0, int op1 = 0, int op2 = 0, char* a = NULL);
        void print(ostream& trace); 
        void printOPCode(ostream& trace);
        void printOP1(ostream& trace);
        void printOP2(ostream& trace);
};