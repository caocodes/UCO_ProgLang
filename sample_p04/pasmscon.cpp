//----------------------------------------------------------------------------
//File pasmscon.cpp implements member functions of class 
//pasmscon
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
//This includes C & C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
//----------------------------------------------------------------------------
//This will include application files 
//----------------------------------------------------------------------------
#include "pasmscon.h"
//----------------------------------------------------------------------------
//using  std Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Constructor calling
//----------------------------------------------------------------------------
pasmscon::pasmscon(int sz):size(sz),count(0)
{  

 T = new SetConstant[size];

}
//----------------------------------------------------------------------------
//Destructor calling
//----------------------------------------------------------------------------
pasmscon::~pasmscon()
{
    if (T) delete[] T; 
}
//----------------------------------------------------------------------------
//Checks if a array is full 
//----------------------------------------------------------------------------
bool pasmscon::IsFull(void)
{
    return count>=size-1;
} 
//----------------------------------------------------------------------------
//Function checks if array is empty or not 
//----------------------------------------------------------------------------
bool pasmscon::IsEmpty(void)
{
    return count==0;
} 
//----------------------------------------------------------------------------
//This inserts set of constants and will not take duplicates
//----------------------------------------------------------------------------
int pasmscon::Insert(SetConstant v)
{   
    if (IsFull()) throw pasmsconFullException(); 
    T[count]=v;
    return count++; 
}
//----------------------------------------------------------------------------
//Function Print formats and prints the array
//----------------------------------------------------------------------------
void pasmscon::Print(ostream& o)
{   
    o << endl;
    o << "Set Constants"; 
    o << endl;
    o << setw( 5) << "Index";
    o << " ";
    o << "Constant";
    int i=0;
    while (i<count) 
    {
        o << endl;
	    o << setw( 5) << i;
	    o << " ";
	    T[i].Print(o);
        i++;
    }
    o << endl;
}
//----------------------------------------------------------------------------
//Function Write writes the binary image of theinstruction array to file f
//----------------------------------------------------------------------------
void pasmscon::Write(FILE* f) 
{  
    fwrite(T,sizeof(SetConstant),count,f);
}
//----------------------------------------------------------------------------
//Function Read reads the binary image of the instruction array from file f
//----------------------------------------------------------------------------
void pasmscon::Read(FILE* f) 
{  
    fread(T,sizeof(SetConstant),count,f);
}
//----------------------------------------------------------------------------
//Function Size returns the number of bytes occupied by the Set Constants
//Table.
//----------------------------------------------------------------------------
int pasmscon::Size(void)
{
    return count*sizeof(SetConstant);
}
