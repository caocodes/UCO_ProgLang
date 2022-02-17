#ifndef exppar_h
#define exppar_h 1

//---------------------------------------------------------------------
// File p02par.h contains the interface to the parser and
// supporting functions defined in file p02par.y.
//---------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p02
// Due:		February 17, 2022
// Project Account Number: tt035
//---------------------------------------------------------------------

#include "p02lex.h"

#ifdef __cplusplus
extern "C"
#endif
int yyparse (void);
class Parser: public Lexer 
{
  public:
    Parser(FILE* i):Lexer(i){}
    int Parse(void) { return yyparse(); }
};
#endif

