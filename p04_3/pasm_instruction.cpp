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
#include <map>
using namespace std;

#include "pasmlex.h"
#include "pasm_instruction.h"

extern map<int, string> tokenSpelling;

PasmInstruction::PasmInstruction(int opc, int op1, int op2)
    : opcode(opc), operand1(op1), operand2(op2) {}

void PasmInstruction::print(ostream &output)
{
    printOPCode(output);
    printOP1(output);
    printOP2(output);
}

void PasmInstruction::printOPCode(ostream& output) {
    string spelling = "0";
    if (tokenSpelling.find(opcode) != tokenSpelling.end()) {
		spelling = tokenSpelling[opcode];
	}
    output << endl << "\t" << spelling;
    output << "(";
    output << setw(2) << hex << setfill('0') << static_cast<uint32_t>(opcode);
    output << ")";
}

void PasmInstruction::printOP1(ostream& output) {
    string spelling = "0";
    output << "  " << spelling;
    output << "(";
    output << setw(2) << hex << setfill('0') << operand1;
    output << ")";
}

void PasmInstruction::printOP2(ostream& output) {
    string spelling = "0";
    output << "  " << spelling;
    output << "(";
    output << setw(4) << hex << setfill('0') << operand2;
    output << ")";
}