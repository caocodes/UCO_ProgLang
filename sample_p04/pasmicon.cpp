//----------------------------------------------------------------------------
//File pasmicon.cpp implements member functions of class 
//pasmicon
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
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
#include "pasmicon.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Constructor
//----------------------------------------------------------------------------
pasmicon::pasmicon(int sz):size(sz),count(0)
{   I=new int[size];
}
//----------------------------------------------------------------------------
//Destructor
//----------------------------------------------------------------------------
pasmicon::~pasmicon(){if (I) delete[] I; }
//----------------------------------------------------------------------------
//Function IsFull determines if the array I is full.
//----------------------------------------------------------------------------
bool pasmicon::IsFull(void){return count>=size-1;} 
//----------------------------------------------------------------------------
//Function IsEmpty determines if the array I is empty.
//----------------------------------------------------------------------------
bool pasmicon::IsEmpty(void){return count==0;} 
//----------------------------------------------------------------------------
//Function Insert inserts an integer in the next available entry and
//returns the index of the integer constant. Duplicates are prohibited.
//----------------------------------------------------------------------------
int pasmicon::Insert(int v)
{   
    for (int i=0;i<count;i++) if (v==I[i]) return i;
    if (IsFull()) throw pasmiconFullException(); 
    I[count]=v;
    return count++; 
}
//----------------------------------------------------------------------------
//Function Print formats and prints the array
//----------------------------------------------------------------------------
void pasmicon::Print(ostream& o)
{   
    o << endl;
    o << "Integer Constants";
    o << endl;
    o << setw( 5) << "Index";
    o << " ";
    o << setw(10) << "Constant";
    for (int i=0;i<count;i++) {
        o << endl;
	o << setw( 5) << i;
	o << " ";
	o << setw(10) << I[i];
    }
    o << endl;
}
//----------------------------------------------------------------------------
//Function Write writes the binary image of theinstruction array to file f
//----------------------------------------------------------------------------
void pasmicon::Write(FILE* f) 
{   fwrite(I,sizeof(int),count,f);
}
//----------------------------------------------------------------------------
//Function Read reads the binary image of the instruction array from file f
//----------------------------------------------------------------------------
void pasmicon::Read(FILE* f) 
{   fread(I,sizeof(int),count,f);
}
//----------------------------------------------------------------------------
//Function Size returns the number of bytes occupied by the integer constants
//array
//----------------------------------------------------------------------------
int pasmicon::Size(void){return count*sizeof(int);}
