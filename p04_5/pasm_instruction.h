//--------------------------------------------------------------------
// File pasm_instruction.h contains the interface for the 
// PasmInstruction utility class for processing P-Code instructions
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
#ifndef pasm_instruction_h
#define pasm_instruction_h

#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <string>
using namespace std;

class PasmInstruction {
    int opcode;
    int operand1;
    int operand2;

    public:
    string labelStr;

    public:
        PasmInstruction(int opc = 0, int op1 = 0, int op2 = 0);
        void print(ostream& output); 
        void printOPCode(ostream& output);
        void printOP1(ostream& output);
        void printOP2(ostream& output);
        int getOpCode();
        int getOperand1();
        int getOperand2();
        void setOperand2(int value);
};

#endif