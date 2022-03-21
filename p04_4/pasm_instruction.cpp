//--------------------------------------------------------------------
// File pasm_instruction.cpp is the implementation of the
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
// Project:	p04.4
// Due:		March 24, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <map>

#include "pasmlex.h"
#include "pasm_instruction.h"
#include "pasmtkn.h"

using namespace std;

extern map<int, string> tokenSpelling;

PasmInstruction::PasmInstruction(int opc, int op1, int op2)
    : opcode(opc), operand1(op1), operand2(op2) {}

void PasmInstruction::print(ostream &output)
{
    output << endl << "\t";
    printOPCode(output);
    printOP1(output);
    printOP2(output);
}

void PasmInstruction::printOPCode(ostream &output)
{
    string spelling = "0";
    int t = opcode + 1;
    if (tokenSpelling.find(t) != tokenSpelling.end())
    {
        spelling = tokenSpelling[t];
    }
    output << spelling;
    output << "(";
    output << setw(2) << hex << setfill('0') << static_cast<uint32_t>(opcode);
    output << ")";
}

void PasmInstruction::printOP1(ostream &output)
{
    string spelling = "0";
    int t = opcode + CUP_O;

    if ((RTN_O <= t && t <= LEQ_O) ||
        (LDI_O == t) || (STI_O == t) ||
        (LDC_O == t))
    {
        int typeToken = operand1 + A_T;
        spelling = tokenSpelling[typeToken];
    }
    else if (ENT_O == t)
    {
        int registerToken = operand1 + SP_R;
        spelling = tokenSpelling[registerToken];
    }
    else
    {
        spelling = to_string(operand1);
    }

    output << "  " << spelling;
    output << "(";
    output << setw(2) << hex << setfill('0') << operand1;
    output << ")";
}

void PasmInstruction::printOP2(ostream &output)
{
    string spelling = "0";
    int opcodeToken = opcode + CUP_O;
    if (CSP_O == opcodeToken)
    {
        int stdfuncToken = operand2 + RDB_F;
        spelling = tokenSpelling[stdfuncToken];
    } else if (LDC_O == opcodeToken)
    {
        spelling = to_string(index);
    }
    else
    {
        spelling = to_string(operand2);
    }

    output << "  " << spelling;
    output << "(";
    if(LDC_O == opcodeToken) {
        output << setw(4) << hex << setfill('0') << index;
    } else {
        output << setw(4) << hex << setfill('0') << operand2;
    }
    output << ")";
}


int PasmInstruction::getOpCode() {
    return opcode;
}

int PasmInstruction::getOperand1() {
    return operand1;
}

int PasmInstruction::getOperand2() {
    return operand2;
}

void PasmInstruction::setIndex(int i) {
    index = i;
}