//--------------------------------------------------------------------------
//File p03.cpp processes command line parameters, opens input and output files
//found on the command line, and employs a stack to compute the value of
//a postfix expresssion found in the input file.
//--------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: tturner@uco.edu
//Date: September, 2001
//--------------------------------------------------------------------------
//Copyright September, 2001 by Thomas R. Turner
//Do not reproduce without permission from Thomas R. Turner
//--------------------------------------------------------------------------
//Standard C and C++ includes
//--------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
using namespace std;
//-------------------------------------------------------------------------
//Application includes
//-------------------------------------------------------------------------
#include "Scan03.h"
//-------------------------------------------------------------------------
//FileException is thrown when a file whose name is given on the command line
//cannot be opened.
//-------------------------------------------------------------------------
struct FileException
{
    FileException(char *fn)
    {
        cout << endl;
        cout << "File " << fn << " cannot be opened.";
    }
};
//-------------------------------------------------------------------------
//CommandLineException is thrown when too many arguments are given on the command
//line.
//-------------------------------------------------------------------------
struct CommandLineException
{
    CommandLineException(int ac)
    {
        cout << endl;
        cout << "Too many (" << ac << ") command line arguments.";
    }
};
//-------------------------------------------------------------------------
//Function Mgr processes the input file stream i
//-------------------------------------------------------------------------
void Mgr(FILE *i, ostream &o)
{
    Scan L(i);
    for (;;)
    {
        int t = L.Lex();
        if (t == 0)
            break;
        switch (t)
        {
        case INTLIT:
            o << endl
              << "INTLIT=" << L.FetchSpelling();
            break;
        case PLUS:
            o << endl
              << "PLUS =" << L.FetchSpelling();
            break;
        case MINUS:
            o << endl
              << "MINUS =" << L.FetchSpelling();
            break;
        case STAR:
            o << endl
              << "STAR =" << L.FetchSpelling();
            break;
        case SLASH:
            o << endl
              << "SLASH =" << L.FetchSpelling();
            break;
        }
    }
    o << endl;
}

//-------------------------------------------------------------------------
//Function main processes command line arguments and opens files specified
//on the command line.
//-------------------------------------------------------------------------
int main(int argc, char *argv[])
{
    try
    {
        char ifn[255]; //Input File Name
        char ofn[255]; //Output File Name
        switch (argc)
        {
        case 1: //Prompt for both file names
            cout << "Enter the input file name. ";
            cin >> ifn;
            cout << "Enter the output file name. ";
            cin >> ofn;
            break;
        case 2:
            strcpy(ifn, argv[1]);
            cout << "Enter the output file name. ";
            cin >> ofn;
            break;
        case 3:
            strcpy(ifn, argv[1]);
            strcpy(ofn, argv[2]);
            break;
        default:
            throw CommandLineException(argc);
        }
        FILE *ifp = fopen(ifn, "r");
        if (!ifp)
            throw FileException(ifn);
        ofstream ofs(ofn);
        if (!ofs)
            throw FileException(ofn);
        Mgr(ifp, ofs);
        fclose(ifp);
        ofs.close();
    }
    catch (...)
    {
        cout << endl;
        cout << "Program terminated.";
        exit(EXIT_FAILURE);
    }
    return 0;
}