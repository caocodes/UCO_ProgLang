#ifndef pasmlex_h
#define pasmlex_h 1
//--------------------------------------------------------------------
// File pasmlex.h defines the interface to the Subset Pascal scanner.
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
// Project:	p04.3
// Due:		March 10, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------

// Function yylex returns an integer token code as defined 
// above or 0 if end-of-file has been reached.
//--------------------------------------------------------------------
#ifdef __cplusplus
extern "C"
#endif
    int yylex(void);
//--------------------------------------------------------------------
//Class Lexer defines the attributes of a Lexer
//--------------------------------------------------------------------
class Lexer
{
public:
  Lexer(FILE *i);
  int lex(void);
  char* getSpelling(void);
  int getLine(void);
  int getColumn(void);
};

#endif