#ifndef pasmicon_h
#define pasmicon_h 1
//----------------------------------------------------------------------------
//File pasmicon.h defines the P-Code Instruction Array
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
//----------------------------------------------------------------------------
//Class pasmicon defines the attributes of Integer Constants 
//----------------------------------------------------------------------------
class pasmicon {
    int size;                       //Number of available elements 
    int count;                      //Number of occupied elements
    int* I;                         //Points to an array of integers 
public:
    pasmicon(int sz=500);
    ~pasmicon();
    class pasmiconFullException {};
    class pasmiconEmptyException {};
    bool IsFull(void);              //Is the array full?
    bool IsEmpty(void);             //Is the array empty?
    int Insert(int v);              //Insert an integer constant and return
                                    //its index
    void Print(ostream& o);         //Format and print integer constants 
    void Write(FILE* f);            //Write array I to a binary file 
    void Read(FILE* f);             //Read integer constants into array I 
    int  Size(void);                //Returns the number of bytes occupied
                                    //by the Integer Constants Table
};
#endif
