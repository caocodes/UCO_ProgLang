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
// Due:		April 26, 2022
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
    public:
    unsigned char opcode;
    unsigned char operand1;
    short operand2;

    public:
        PasmInstruction(unsigned char opc = 0,unsigned char op1 = 0, short op2 = 0);
        void print(ostream& output); 
        void printOPCode(ostream& output);
        void printOP1(ostream& output);
        void printOP2(ostream& output);
        unsigned char getOpCode();
        unsigned char getOperand1();
        short getOperand2();
        void setOperand2(short value);
};

#endif