#ifndef PasmInstruction_h
#define PasmInstruction_h 1
//----------------------------------------------------------------------------
//File PasmInstruction.h defines a P-Code Instruction
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
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class PasmInstruction defines the attributes of the P-Code Assembler Parser
//----------------------------------------------------------------------------
class PasmInstruction {
    unsigned char OP;               //Op-code
    unsigned char R1;               //Operand 1
    unsigned short R2;              //Operand 2
public:
    PasmInstruction                 //Constructor
        (unsigned char op=0
	,unsigned char r1=0
	,unsigned short r2=0
	);
    void Store(PasmInstruction& I); //Store an entire instruction
    void StoreOP(unsigned char op); //Store the op-code
    void StoreR1(unsigned char r1); //Store operand 1
    void StoreR2(unsigned short r2);//Store operand 2
    unsigned char FetchOP(void);    //Fetch the op-code
    unsigned char FetchR1(void);    //Fetch operand 1
    unsigned short FetchR2(void);   //Fetch operand 2
    void Print(ostream& o);         //Format and print this instruction
    void PrintOP(ostream& o);       //Format and print the op-code
    void PrintR1(ostream& o);       //Format and print operand 1
    void PrintR2(ostream& o);       //Format and print operand 2
    void Write(FILE* f);            //Write this instruction to a binary file
    void Read(FILE* f);             //Read this instruction from a binary file
};
#endif
