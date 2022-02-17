#ifndef p02lex_h
#define p02lex_h 1
//--------------------------------------------------------------------
// File p02lex.h defines the interface to the Subset Pascal scanner.
//--------------------------------------------------------------------
// Author:	Mr. Cao Truong
// Student ID: *20500231
// E-Mail:	ctruong3@uco.edu
// Course:	CMSC 5023 – Programming Languages
// CRN:		22708, Spring 2022
// Project:	p02
// Due:		February 17, 2022
// Project Account Number: tt035
//--------------------------------------------------------------------
// Standard C and C++ include files
//--------------------------------------------------------------------
#include <cstdio>
#include <fstream>
#include <iostream>
//--------------------------------------------------------------------
//Namespaces
//--------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//Function: yylex
//Function yylex is the Scanner. Function yylex returns an integer
//token code as defined above or 0 if end-of-file has been
//reached.
//--------------------------------------------------------------------
#ifdef __cplusplus
extern "C"
#endif
    int yylex(void);
//--------------------------------------------------------------------
//Class Scanner defines the attributes of a Scanner
//--------------------------------------------------------------------
class Scanner
{
public:
  Scanner(FILE *i);
  int lex(void);
  char* getSpelling(void);
  int getLine(void);
  int getColumn(void);
};

#endif