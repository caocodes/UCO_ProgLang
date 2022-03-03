//----------------------------------------------------------------------------
//File pasmtcon.cpp implements member functions of class 
//pasmtcon
//----------------------------------------------------------------------------
//Author: 
//E-Mail: 
//Date:   
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
//This will include  c and c ++lib files 
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <cstring>
//----------------------------------------------------------------------------
//This will include the .h files that helps with application
//----------------------------------------------------------------------------
#include "pasmtcon.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------
//----------------------------------------------------------------------------
//Constructor callingxs
//----------------------------------------------------------------------------
pasmtcon::pasmtcon(int sz):size(sz),charcount(0),stringcount(0)
{  

    S = new char[size];

}
//----------------------------------------------------------------------------
//Destructor calling
//----------------------------------------------------------------------------

pasmtcon::~pasmtcon()
{
    if (S) delete[] S; 

}
//----------------------------------------------------------------------------
//Function IsFull will determine if it is full or not 
//----------------------------------------------------------------------------
bool pasmtcon::IsFull(char* s)
{

    return (charcount+strlen(s)+1)>=size-1;

} 
//----------------------------------------------------------------------------
//Function IsEmpty determines if the array S is empty.
//----------------------------------------------------------------------------
bool pasmtcon::IsEmpty(void)
{

    return charcount==0;

} 
//----------------------------------------------------------------------------
//Function Insert inserts a string in the next available entry and
//returns the index of the integer constant. Duplicates are prohibited.
//----------------------------------------------------------------------------
int pasmtcon::Insert(char* s)
{ 

    int ndx=Index(s);
    if (ndx>=0) return ndx;
    if (IsFull(s)) throw pasmtconFullException();
    int rv=charcount;
    strcpy((S+charcount),s);
    charcount=charcount+strlen(s)+1;
    stringcount=stringcount+1;
    return rv;

}
//----------------------------------------------------------------------------
//Function Print formats and prints the array
//----------------------------------------------------------------------------
void pasmtcon::Print(ostream& o)
{   

    o << endl;
    o << "String Constants";
    o << endl;
    o << setw( 5) << "Index";
    o << " ";
    o << setw(10) << "Constant";
    o << endl;
    int p=0;
    while (p<charcount)
     {
        o << endl;
        o << setw( 5) << p;
        o << " ";
        o << "\"" << (S+p) << "\""; 
        int increment=strlen(S+p)+1;
        p=p+increment;
    }
    o << endl;
}
//----------------------------------------------------------------------------
//Function Write writes the binary image of theinstruction array to file f
//----------------------------------------------------------------------------
void pasmtcon::Write(FILE* f) 
{   
    fwrite(S,sizeof(char),charcount,f);
}
//----------------------------------------------------------------------------
//Function Read reads the binary image of the instruction array from file f
//----------------------------------------------------------------------------
void pasmtcon::Read(FILE* f) 
{  

     fread(S,sizeof(char),charcount,f);

}
//----------------------------------------------------------------------------
//Function Size returns the number of bytes occupied by the integer constants
//array
//----------------------------------------------------------------------------
int pasmtcon::Size(void)
{

    return charcount*sizeof(char);

}
//----------------------------------------------------------------------------
//Function Index returns the index of the input string s or -1 if the string
//is not in the list.
//----------------------------------------------------------------------------
int pasmtcon::Index(char* s)
{   
    int p=0;
   

    for (;;)
    {
        if (strcmp((S+p),s)==0) 
            return p;


        p=p+strlen(s)+1;


        if (p+strlen(s)+1>charcount)
            break;
    }
    return -1;
}
//----------------------------------------------------------------------------
// Number of bytes occupied by integer constants array are stored in Function Size
//----------------------------------------------------------------------------
void pasmtcon::EightByteBoundary(void)
{  

    if (charcount%8) charcount=charcount+8-(charcount%8);

}
