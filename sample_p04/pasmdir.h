#ifndef PASMDIR_H
#define PASMDIR_H 1
//----------------------------------------------------------------------------
//File pasmdir.h defines the P-Code Assembler Directory
//----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@ucok.edu
//Date:   April, 2004
//----------------------------------------------------------------------------
//Copyright April, 2004 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class pasmdir defines the attributes of the P-Code Assembler Directory
//----------------------------------------------------------------------------
class pasmdir {
    int start;                  //Index of the first instruction
    int ssize;                  //Stack size
    int iaoffset;               //Instruction array offset
    int iasize;                 //Instruction array size
    int icoffset;               //Integer constants offset
    int icsize;                 //Integer constants size
    int rcoffset;               //Real constants offset
    int rcsize;                 //Real constants size
    int scoffset;               //String constants offset
    int scsize;                 //String constants size
    int tcoffset;               //Set constants offset
    int tcsize;                 //Set constants size
public:
    pasmdir();
    ~pasmdir();
    void StoreSizes             //Stores sizes of regions specified in the
	                        //directory
        (int sts                //Stack size
	,int ias                //P-Code instruction array size
	,int ics                //Integer constants size
	,int rcs                //Real constants size
	,int scs                //String constants size
	,int tcs                //Set constants size
	);
    void Print(ostream& o);
    void Write(FILE* f);
    void Read(FILE* f);
};
#endif
