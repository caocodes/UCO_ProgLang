
#include "pasmlex.h"
#include "pasm_instruction.h"


PasmInstruction::PasmInstruction(char opc, char op1, char op2)
    : opcode(opc), operand1(op1), operand2(op2) {}

void PasmInstruction::print(ostream& o)
{   o << setfill(' ') << dec;
    PrintOP(o);
    o << setfill (' ') << dec << " ";
    PrintR1(o);
    o << setfill (' ') << dec << " ";
    PrintR2(o);
    o << setfill (' ') << dec << " ";
}