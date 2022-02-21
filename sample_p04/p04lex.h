#ifndef p04lex_h
#define p04lex_h 1
//--------------------------------------------------------------------
// File p04lex.h defines class Lexer.
//--------------------------------------------------------------------
// Team Identification Block
// Author 1: 	Daniel L. Tomei
// Student ID: 	*20491050
// E-Mail: 	dtomei@uco.edu
// CRN: 	13855, Fall, 2020
// Author 2: 	Aditi Panvelkar
// Student ID: 	*20490610
// E-Mail: 	apanvelkar@uco.edu
// CRN: 	13855, Fall, 2020
// Course: 	CMSC 5023 – Programming Languages
// Project: 	p04
// Due: 	December 10, 2020
// Project Account Number: tt162
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
//Function yylex is the parser.  Function yylex returns an integer
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
class Lexer
{
public:
    Lexer(FILE *i); //Constructor used to redirect the keyboard
                    //(stdin) to file i.
    int Lex(void);  //Call the scanner yylex and return the code
};
#endif