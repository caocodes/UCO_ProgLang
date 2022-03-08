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
using namespace std;

class PasmInstruction {
    char opcode;
    char operand1;
    char operand2;

    public:
        PasmInstruction(int opc = 0, char op1 = 0, char op2 = 0);
        void print(ostream& o); 
};