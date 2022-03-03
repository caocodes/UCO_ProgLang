#ifndef pasmtcon_h
#define pasmtcon_h 1
//----------------------------------------------------------------------------
//File pasmtcon.h defines how character string constants are stored
//in a P-Code Executable File 
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// include files of c and c++ libs
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
//----------------------------------------------------------------------------
//
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//using name std Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class pasmtcon determinds the attributes of pasm
//----------------------------------------------------------------------------
class pasmtcon
 {
    int size;                       //available characters
    int charcount;                  //occupied characters
    int stringcount;                //occupied strings
    char* S; 
                           
public:

    pasmtcon(int sz=4096);
    ~pasmtcon();
    class pasmtconFullException {};
    class pasmtconEmptyException {};
    bool IsFull(char* s);           //it will check if it is full
    bool IsEmpty(void);             //it will check if the array is empty 
    int Insert(char* s);            //Inserts the string 
                                    
    void Print(ostream& o);         //Prints the integer constants 
    void Write(FILE* f);            //Writes a binary file to f  
    void Read(FILE* f);             //Reads the integer to file s 
    int  Size(void);                
                                    //by the String Constants Table
    int Index(char* s);             //Returns the index of string s or -1
                                    //if the string is not in the list
    void EightByteBoundary(void);   //it will confirm if it is multiple of 8

};

#endif
