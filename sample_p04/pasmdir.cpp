//----------------------------------------------------------------------------
//File pasmdir.cpp implements member functions of class pasmdir
//----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@ucok.edu
//Date:   April, 2004
//----------------------------------------------------------------------------
//Copyright April,  2004 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
#include "pasmdir.h"
#include "PasmInstruction.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class pasmdir defines the attributes of the P-Code Assembler Parser
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//Constructor
//----------------------------------------------------------------------------
pasmdir::pasmdir(){}
//----------------------------------------------------------------------------
//Destructor
//----------------------------------------------------------------------------
pasmdir::~pasmdir(){}
//----------------------------------------------------------------------------
//Function StoreSizes stores the sizes of the separate regions in a P-Code
//Executable file. Offset values are computed given sizes. 
//Parameter sts contains the size of the stack.
//Parameter ias contains the size of the p-code instruction array.
//Parameter ics contains the size of the integer constants.
//Parameter rcs contains the size of the real constants.
//Parameter scs contains the size of the string constants.
//Parameter tcs contains the size of the set contants.
//----------------------------------------------------------------------------
void pasmdir::StoreSizes
    (int sts                    //Size of the stack.
    ,int ias                    //Size of the p-code instruction array
    ,int ics                    //Size of the integer constants
    ,int rcs                    //Size of the real constants
    ,int tcs                    //Size of the set constants
    ,int scs                    //Size of the string constants
    )
{   ssize=sts; iasize=ias; icsize=ics; rcsize=rcs; scsize=scs; tcsize=tcs;
    scoffset=sizeof(pasmdir);
    tcoffset=tcoffset+tcsize;
    rcoffset=scoffset+scsize;
    icoffset=rcoffset+rcsize;
    iaoffset=icoffset+icsize;
    start=iasize/sizeof(PasmInstruction)-3;
}
//----------------------------------------------------------------------------
//Function Print prints the directory
//----------------------------------------------------------------------------
void pasmdir::Print(ostream& o)
{   o << endl;
    o << "Directory";
    o << endl;
    o << setw(10) << "start=" << setw(4) << start 
      << " instruction address of first instruction";
    o << endl;
    o << setw(10) << "ssize=" << setw(4) << ssize 
      << " stack size";
    o << endl; 
    o << setw(10) << "doffset=" << setw(4) << 0 
      << " directory offset";
    o << endl; 
    o << setw(10) << "dsize="   << setw(4) << sizeof(pasmdir)
      << " directory size";
    o << endl; 
    o << setw(10) << "scoffset=" << setw(4) << scoffset 
      << " string constants offset";
    o << endl; 
    o << setw(10) << "scsize="   << setw(4) << scsize   
      << " string constants size";
    o << endl; 
    o << setw(10) << "tcoffset=" << setw(4) << tcoffset 
      << " set constants offset";
    o << endl; 
    o << setw(10) << "tcsize="   << setw(4) << tcsize   
      << " set constants size";
    o << endl; 
    o << setw(10) << "rcoffset=" << setw(4) << rcoffset 
      << " real constants offset";
    o << endl; 
    o << setw(10) << "rcsize="   << setw(4) << rcsize   
      << " real constants size";
    o << endl; 
    o << setw(10) << "icsize="   << setw(4) << icsize   
      << " integer constants size";
    o << endl; 
    o << setw(10) << "iaoffset=" << setw(4) << iaoffset 
      << " instruction array offset";
    o << endl;
    o << setw(10) << "iasize="  << setw(4) << iasize   
      << " instruction array size";
    o << endl; 
}
//----------------------------------------------------------------------------
//Function Write writes the internal (unformatted) representation of the 
//directory to file f.
//----------------------------------------------------------------------------
void pasmdir::Write(FILE* f)
{   fwrite(this,sizeof(pasmdir),1,f);
}
//----------------------------------------------------------------------------
//Function Read reads  the internal (unformatted) representation of the 
//directory from file f.
//----------------------------------------------------------------------------
void pasmdir::Read(FILE* f)
{   fread(this,sizeof(pasmdir),1,f);
}
