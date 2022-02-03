#ifndef p01lex_h
#define p01lex_h 1
//--------------------------------------------------------------------
// File p01lex.h defines the interface to the Subset Pascal scanner.
//--------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p01
// Due:		February 3, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
// Standard C and C++ include files
//--------------------------------------------------------------------
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iomanip>
//--------------------------------------------------------------------
//Namespaces
//--------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//Function: yylex                                                     
//Function yylex is the expner.  Function yylex returns an integer   
//token code as defined above or 0 if end-of-file has been     
//reached.                                                            
//--------------------------------------------------------------------
#ifdef __cplusplus
extern "C" 
#endif
int yylex(void);
//--------------------------------------------------------------------
//Class Lexer defines the attributes of a Scanner
//--------------------------------------------------------------------
class Lexer {
	int tokenCode;

public:
  Lexer(FILE *i);                //Constructor used to redirect the keyboard
  int getScan(void);			 
  char *spellCheck(void);
  int getLines(void);
  int getColumns(void);
};

#endif