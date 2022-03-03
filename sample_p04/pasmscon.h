#ifndef pasmscon_h
#define pasmscon_h 1
//----------------------------------------------------------------------------
//File pasmscon.h defines real constants
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------
//
//----------------------------------------------------------------------------
// include C and C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cstdio>
//----------------------------------------------------------------------------
//Application include files 
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
// using std Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//--------------------------------------------------------------------
class SetConstant
 {
    unsigned char t[8];

public:

    SetConstant()
    {
        int a=0;
        while (a<8) 
            {
                t[a]=0;
                a++;

            }
    }

    void Print(ostream& o)
    {
        int a=0;
        while (a<8)
        {
         o << setw(2) << hex << t[a];
         a++;
        }
    }
};

//----------------------------------------------------------------------------
//Class pasmscon defines the set constants 
//----------------------------------------------------------------------------
class pasmscon 
{
    
    int size;                       //available elements 
    int count;                      //occupied elements
    SetConstant* T;                 //Points to an array of set constants

public:

    pasmscon(int sz=500);
    ~pasmscon();
    class pasmsconFullException {};
    class pasmsconEmptyException {};
    bool IsFull(void);              //Check if the array full?
    bool IsEmpty(void);             //Check if  array empty?
    int Insert(SetConstant v);      //Insert the constants 
                                    //its index
    void Print(ostream& o);         //prints the array
    void Write(FILE* f);            //this will write file to f 
    void Read(FILE* f);             //Read real constants into array R 
    int  Size(void);                //Returns the number of bytes occupied
                                    //by the real constants table
};

#endif
