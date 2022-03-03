#ifndef pasmrcon_h
#define pasmrcon_h 1
//----------------------------------------------------------------------------
//File Pasmrcon.h defines real constants
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------


//----------------------------------------------------------------------------
//C and C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//using Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Class pasmrcon defines the attributes of real Constants 
//----------------------------------------------------------------------------
class pasmrcon {

    int size;                       //Number of available elements 
    int count;                      //Number of occupied elements
    double* R;  
                        //Points to an array of reals 
public:

    pasmrcon(int sz=500);
    ~pasmrcon();
    class pasmrconFullException {};
    class pasmrconEmptyException {};
    bool IsFull(void);              //arrray is full or not 
    bool IsEmpty(void);             //array is empty or not 
    int Insert(double v);           //Inserts a array 
                                    
    void Print(ostream& o);         //prints integer constants 
    void Write(FILE* f);            //Write array  file 
    void Read(FILE* f);             //Read real constants 
    int  Size(void);                
                                   
};

#endif
