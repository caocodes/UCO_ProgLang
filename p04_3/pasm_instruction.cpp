
#include <map>

#include "pasmlex.h"
#include "pasm_instruction.h"

extern map<int, string> tokenSpelling;

PasmInstruction::PasmInstruction(char opc, char op1, char op2)
    : opcode(opc), operand1(op1), operand2(op2) {}

void PasmInstruction::print(ostream &output)
{
    output << endl << "\t" << opcode;
}