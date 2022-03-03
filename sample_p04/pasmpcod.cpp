//----------------------------------------------------------------------------
//File Pasmpcod.cpp implements member functions of class 
//PasmInstructionArray
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
//This will include the files from c++ library
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
//----------------------------------------------------------------------------
//This will include pasmpcod.h file to use it's member functions 
//----------------------------------------------------------------------------
#include "pasmpcod.h"
//----------------------------------------------------------------------------
//This will use namespace 
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class pasmpcod keeps the attributes for the P-Code Instruction
//Array
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//constructor calling
//----------------------------------------------------------------------------
pasmpcod::pasmpcod(int sz):size(sz),count(0)
{   IA=new PasmInstruction[size];
}
//----------------------------------------------------------------------------
//Destructor calling
//----------------------------------------------------------------------------
pasmpcod::~pasmpcod()
{
    if (IA) delete[] IA; 
}
//----------------------------------------------------------------------------
//function is full let us know if a array is full 
//----------------------------------------------------------------------------
bool pasmpcod::IsFull(void)
{
    return count>=size-1;
} 
//----------------------------------------------------------------------------
//Function IsEmpty let us know if a function is empty
//----------------------------------------------------------------------------
bool pasmpcod::IsEmpty(void)
{
    return count==0;
} 
//----------------------------------------------------------------------------
//Function Insert uses the inserts the array
//----------------------------------------------------------------------------
void pasmpcod::Insert(PasmInstruction& I)
{   if (IsFull()) throw pasmpcodFullException(); 
    IA[count++].Store(I);
}
//----------------------------------------------------------------------------
//this will print and format and prints array.
//----------------------------------------------------------------------------
void pasmpcod::Print(ostream& o)
{   
    o << endl;
    o << "P-Code Instruction Array";
    o << endl;
    o << setw(4)  <<         "PC";
    o << " ";
    o << setw(7)  << left << "OP";
    o << " ";
    o << " ";
    o << setw(7)  << left << "R1";
    o << " ";
    o << " ";
    o << " ";
    o << " ";
    o << setw(11) << left << "R2";
    o << right;
    int a=0;
    while (a<count)
    {
        o << endl;
	    o << setw(4) << a;
	    o << " ";
	    IA[a].Print(o);
        a++;
    }
    o << endl;
}
//----------------------------------------------------------------------------
//This function writes a file to f 
//----------------------------------------------------------------------------
void pasmpcod::Write(FILE* f) 
{   
     int a=0;
    while(a<count)
    {
        IA[a].Write(f);
        a++;
    }


    
}
//----------------------------------------------------------------------------
//This Function reads a file to f 
//----------------------------------------------------------------------------
void pasmpcod::Read(FILE* f) 
{   
       
     int a=0;
    while(a<count)
    {
        IA[a].Read(f);
        a++;
    }

       
}
//----------------------------------------------------------------------------
//This Function IC returns the index of the next available instruction
//----------------------------------------------------------------------------
int pasmpcod::IC(void){return count;}
//----------------------------------------------------------------------------
//Function StoreR2 assigns the parameters 
//whose address is given to ic 
//----------------------------------------------------------------------------
void pasmpcod::StoreR2(int ic,int v)
{
	IA[ic].StoreR2(v);
}
//----------------------------------------------------------------------------
//this will return the size of the array istructions 
//----------------------------------------------------------------------------
int pasmpcod::Size(void)
{
    return count*sizeof(PasmInstruction);
}
