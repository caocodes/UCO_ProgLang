//----------------------------------------------------------------------------
//File PasmInstruction.cpp implements member functions of class PasmInstruction
//----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@ucok.edu
//Date:   March, 2003
//----------------------------------------------------------------------------
//Copyright March, 2003 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
using namespace std;
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
//#include "PCodeOp.h"
//#include "PCodeRegister.h"
//#include "PCodeType.h"
//#include "PCodeFunction.h"
#include "PCodeUpdate.h"
#include "PasmInstruction.h"
//--------------------------------------------------------------------
//File Globals
//--------------------------------------------------------------------
//PCodeOp O;
//PCodeRegister R;
//PCodeType T;
//PCodeFunction FN;
PCodeUpdate PC;
//----------------------------------------------------------------------------
//Class PasmInstruction defines the attributes of the P-Code Assembler Parser
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//Constructor
//----------------------------------------------------------------------------
PasmInstruction::PasmInstruction
    (unsigned char op
    ,unsigned char r1
    ,unsigned short r2
    ):OP(op),R1(r1),R2(r2){}
//----------------------------------------------------------------------------
//Function Store stores the entire instruction 
//----------------------------------------------------------------------------
void PasmInstruction::Store(PasmInstruction& I) { *this=I; }
//----------------------------------------------------------------------------
//Function StoreOP stores the op-code
//----------------------------------------------------------------------------
void PasmInstruction::StoreOP(unsigned char op) { OP=op; }
//----------------------------------------------------------------------------
//Function StoreR1 stores operand 1
//----------------------------------------------------------------------------
void PasmInstruction::StoreR1(unsigned char r1) { R1=r1; }
//----------------------------------------------------------------------------
//Function StoreR2 stores operand 2
//----------------------------------------------------------------------------
void PasmInstruction::StoreR2(unsigned short r2) 
{ 
    R2=r2; 
}
//----------------------------------------------------------------------------
//Function FetchOP returns the op-code
//----------------------------------------------------------------------------
unsigned char PasmInstruction::FetchOP(void) { return OP; }
//----------------------------------------------------------------------------
//Function FetchR1 returns operand 1
//----------------------------------------------------------------------------
unsigned char PasmInstruction::FetchR1(void) { return R1; }
//----------------------------------------------------------------------------
//Function FetchR2 returns operand 2
//----------------------------------------------------------------------------
unsigned short PasmInstruction::FetchR2(void) { return R2; }
//----------------------------------------------------------------------------
//Function Print formats and prints an instruction
//----------------------------------------------------------------------------
void PasmInstruction::Print(ostream& o)
{   o << setfill(' ') << dec;
    PrintOP(o);
    o << setfill (' ') << dec << " ";
    PrintR1(o);
    o << setfill (' ') << dec << " ";
    PrintR2(o);
    o << setfill (' ') << dec << " ";
}
//----------------------------------------------------------------------------
//Function PrintOP formats and prints the op-code
//----------------------------------------------------------------------------
void PasmInstruction::PrintOP(ostream& o)
{   o << setw(3) << PC.Mnemonic(OP);
    o << "(";
    o << setw(2) << hex << setfill('0') << (int)OP;
    o << ")";
}
//----------------------------------------------------------------------------
//Function PrintR1 formats and prints operand 1
//----------------------------------------------------------------------------
void PasmInstruction::PrintR1(ostream& o)
{   switch (OP) {
    case  rtn_O: case equ_O: case neq_O: 
    case grt_O: case geq_O: case  les_O: case leq_O: 
    case ldc_O: case ldi_O: case sti_O:
	    o << setw(3) << setfill(' ') << PC.Mnemonic2((int)R1);
	    break;
	case  ent_O:
	    o << setw(3) << setfill(' ') << PC.Mnemonic1((int)R1);
	    break;
	default:
	    o << setw(3) << dec << setfill(' ') << (int)R1;
	    break;
    }
    o << "(";
    o << setw(2) << hex << setfill('0') << (int)R1;
    o << ")";
}
//----------------------------------------------------------------------------
//Function PrintR2 formats and prints operand 2
//----------------------------------------------------------------------------
void PasmInstruction::PrintR2(ostream& o)
{   switch (OP) {
                              //jump instructions
        case ujp_O: case xjp_O: case fjp_O: case tjp_O:  
	    o << dec << setw(5) << dec << R2;
	    break;
	case ldc_O:          //ldc instruction
                             //Print index only for now
	    o << dec << setw(5) << dec << R2;
	    break;
	case  1:             //csp instruction
	    o << setw(5) << PC.Mnemonic3(R2);
	    break;
	default:
	    o << dec << setw(5) << dec << R2;
	    break;
    }
    o << "(";
    o << setw(4) << hex << setfill('0') << R2;
    o << ")";
}
//----------------------------------------------------------------------------
//Function Write writes the binary image of this instruction to file f
//----------------------------------------------------------------------------
void PasmInstruction::Write(FILE* f) 
{   fwrite(this,sizeof(PasmInstruction),1,f);
}
//----------------------------------------------------------------------------
//Function Read reads the binary image of this instruction from file f
//----------------------------------------------------------------------------
void PasmInstruction::Read(FILE* f) 
{   fread(this,sizeof(PasmInstruction),1,f);
}
