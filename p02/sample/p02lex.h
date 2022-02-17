#ifndef p02lex_h
#define p02lex_h 1
//--------------------------------------------------------------------
// File p02lex.h defines class Lexer.
//--------------------------------------------------------------------

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
    Lexer(FILE *i); 
    int Lex(void);  //Call the scanner yylex and return the code
};
#endif