//--------------------------------------------------------------------
// File pasm_directory.cpp contains the implementation for the
// PasmDirectory class
//--------------------------------------------------------------------
// Author 1: Prantosh Neupane
// Student ID: *20514054
// E-Mail:	pneupane4@uco.edu
// CRN:		21808, Spring 2022
// Author 2: Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// CRN:		22708, Spring 2022
// Course:	CMSC 5023 – Programming Languages
// Project:	p04.6
// Due:		April 26, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

#include "pasm_directory.h"

using namespace std;

PasmDirectory::PasmDirectory(int ss, int ias, int ics, int rcs, int tcs, int scs) : ssize(ss), iasize(ias), icsize(ics), rcsize(rcs), tcsize(tcs), scsize(scs)
{
    start = 3;
    scoffset = sizeof(PasmDirectory);
    tcoffset = scoffset + scsize;
    rcoffset = tcoffset + tcsize;
    icoffset = rcoffset + rcsize;
    iaoffset = icoffset + icsize;
}

void PasmDirectory::print(ostream &o)
{
    o << endl << "Directory" << endl;
    o << "start = " << start << " instruction address of first instruction" << endl;
    o << "ssize=" << ssize << " stack size" << endl; 
    o << "doffset=" << 0 << " directory offset" << endl; 
    o << "dsize=" << sizeof(PasmDirectory) << " directory size" << endl; 
    o << "scoffset=" << scoffset << " string constants offset" << endl; 
    o << "scsize="   << scsize << " string constants size" << endl; 
    o << "tcoffset=" << tcoffset << " set constants offset" << endl; 
    o << "tcsize="   << tcsize << " set constants size" << endl; 
    o << "rcoffset=" << rcoffset << " real constants offset" << endl; 
    o << "rcsize="   << rcsize << " real constants size" << endl; 
    o << "icsize="   << icsize << " integer constants size" << endl; 
    o << "iaoffset=" << iaoffset << " instruction array offset" << endl;
    o << "iasize="  << iasize << " instruction array size" << endl; 
}

void PasmDirectory::write(FILE *f)
{
    fwrite(this, sizeof(PasmDirectory), 1, f);
}
