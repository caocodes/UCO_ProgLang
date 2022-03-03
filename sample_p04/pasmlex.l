%{
//-----------------------------------------------------------------------------
//File pasmlex.l contains the specification for P-Code Assembler Scanner.
//-----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@ucok.edu
//Date:   March, 2003
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
#include "y.tab.h"
int yylval;
int yywrap(void);
%}
%%
[ \t\n]+    ;  
[a-zA-Z]+
    {
        return ID;
    }
    
[0-9]+                          
    {
        return INTLIT;
    }
[0-9]+\.[0-9]+?([eE][+-]?[0-9]+)?                         
    {
        return REALIT;
    }
[0-9]+?\.[0-9]+([eE][+-]?[0-9]+)?                         
    {
        return REALIT;
    }
[0-9]+[eE][+-]?[0-9]+                         
    {
        return REALIT;
    }
'L'[0-9]+                       
    {   
        return LABEL;
    }

%%
int yywrap(void){return 1;}
