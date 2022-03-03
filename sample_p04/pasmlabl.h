#ifndef pasmlabl_h
#define pasmlabl_h 1
//----------------------------------------------------------------------------
//File PasmLabel.h defines a P-Code label
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------
//Copyright April, 2003 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//Including header files here.
//----------------------------------------------------------------------------
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
//----------------------------------------------------------------------------
//Importing  include files here
//----------------------------------------------------------------------------
//#include "PasmList.h"
#include "pasmpcod.h"
//----------------------------------------------------------------------------
//Using Namespace here.
//----------------------------------------------------------------------------
using namespace std;


#ifdef __cplusplus
extern "C" 
#endif
int yylex (void);


//--------------------------------------------------------------------
//----------------------------------------------------------------------------
// Attributes of an entry in the Label Table are defined by Class PasmLabel 
//----------------------------------------------------------------------------
class pasmlabl
 {

    string label;
    int address;
    bool resolved;
    //PasmList reference; 

    int tokencode;  

public:

    pasmlabl();
    pasmlabl(char* id);
    ~pasmlabl();
    bool IsMatch(char* id);
    bool IsResolved(void);
    void InsertReference(int v);
    void ResolveReferences(pasmpcod& IA);
    void ResolveAReference(pasmpcod& IA,int v);
    void Define(int v);
    void Print(ostream& o);
    void Title(ostream& o);

      
      
      pasmlabl(FILE* i);          //Constructor used to redirect the keyboard
                                 //(stdin) to file i.
     int Lex(void);                 //Call the scanner yylex and return the code
                                 //found by yylex
     int FetchTokenCode(void);      //Return the code of the most recent token
     void StoreTokenCode(int T);    //Store the token code.
      char* FetchSpelling(void);  

    
};

#endif
