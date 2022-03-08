#ifndef exppar_h
#define exppar_h 1

//---------------------------------------------------------------------
// File pasmpar.h contains the interface to the parser and
// supporting functions defined in file pasmpar.y.
//---------------------------------------------------------------------
// Author 1: Prantosh Neupane
// Student ID: *20514054
// E-Mail:	pneupane4@uco.edu
// CRN:		21808, Spring 2022
// Author 2: Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// CRN:		22708, Spring 2022
// Course:	CMSC 5023 – Programming Languages
// Project:	p04.3
// Due:		March 8, 2022
// Project Account Number: tt035
//---------------------------------------------------------------------

#include "pasmlex.h"

#ifdef __cplusplus
extern "C"
#endif
int yyparse (void);
class Parser: public Lexer 
{
  public:
    Parser(FILE* i):Lexer(i){}
    int parse(void) { return yyparse(); }
};
#endif

