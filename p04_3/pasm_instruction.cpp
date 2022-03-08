#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <map>
using namespace std;

#include "pasmlex.h"
#include "pasm_instruction.h"

extern map<int, string> tokenSpelling;

PasmInstruction::PasmInstruction(int opc, char op1, char op2)
    : opcode(opc), operand1(op1), operand2(op2) {}

void PasmInstruction::print(ostream &output)
{
    output << endl << "\tOP-CODE: " << tokenSpelling.at(opcode);
    output << "(";
    output << setw(2) << hex << setfill('0') << opcode;
    output << ")";
}