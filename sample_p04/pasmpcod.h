#ifndef pasmpcod_h
#define pasmpcod_h 1
//----------------------------------------------------------------------------
//File Pasmpcod.h defines the P-Code Instruction Array
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//This will include c++ libs
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
//----------------------------------------------------------------------------
//This will include application  files 
//----------------------------------------------------------------------------
#include "PasmInstruction.h"
//----------------------------------------------------------------------------
//This will include or use Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class pasmpcod let us know the attributes reqired 
//Array 
//----------------------------------------------------------------------------
class pasmpcod {
    int size;                       //avilable elements
    int count;                      //Avilable occupied elements
    PasmInstruction* IA;            //Points to an array of P-Code instructions
public:
    pasmpcod(int sz=500);
    ~pasmpcod();
    class pasmpcodFullException {};
    class pasmpcodEmptyException {};
    bool IsFull(void);              //This will make array if array is full
    bool IsEmpty(void);             //This will make array if empty 
    void Insert(PasmInstruction& I);
    int  IC(void);                  //Return the Instruction Counter
    void StoreR2(int ic,int v);     //Store  v in operand 2 of the instruction
                                    //address is ic 
    void Print(ostream& o);         //this will print the instruction array
    void Write(FILE* f);            //This will write a binary file to f
    void Read(FILE* f);             //Read an array of instruction from a
                                    //binary file 
    int  Size(void);                //P-Code instruction array size (bytes)
};
#endif
