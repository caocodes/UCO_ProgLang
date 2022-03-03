#ifndef pasmpar_h
#define pasmpar_h 1
//----------------------------------------------------------------------------
//File PasmParser.h contains defines the parser for the P-Code Assembler
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
//Function: yyparse                                                     
//Function yyparse is the PasmParser.  Function yyparse returns an integer   
//token code as defined above or 0 if end-of-file has been     
//reached.                                                            
//--------------------------------------------------------------------
#ifdef __cplusplus
extern "C" 
#endif
int yyparse (void);
//----------------------------------------------------------------------------
//Class PasmParser defines the attributes of the P-Code Assembler Parser
//----------------------------------------------------------------------------
class pasmpar {
public:
    pasmpar();                   //Default constructor
    void Parse(void);               //Parser

};
#endif
