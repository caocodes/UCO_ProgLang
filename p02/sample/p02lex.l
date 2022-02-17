%{
//--------------------------------------------------------------------
// File p02lex.l defines a prototype scanner for the Micro language.
// The scanner definition is a lex specification.
//-------------------------------------------------------------------

//--------------------------------------------------------------------
// Standard C and C++ Library Include Files
//--------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>
using namespace std;
//--------------------------------------------------------------------
// Application Includes
//--------------------------------------------------------------------
#include "p02lex.h"
#include "p02tkn.h"
//--------------------------------------------------------------------
//Externals
//--------------------------------------------------------------------
extern ofstream tfs;    //Trace file stream tfs
//--------------------------------------------------------------------
//Global Variables
//--------------------------------------------------------------------
static map<string,int> RW;      //RW - Reserve Words
                                //RW is a table of reserve words
                                //and their corresponding
                                //token codes.
static map<int,string> TokenName;
int line=1;                     //Current line number
int col=1;                      //Current column number
//--------------------------------------------------------------------
//Functions
//--------------------------------------------------------------------
int TokenMgr(int t);                //Token post processing
int ReserveWord(char* s);           //Determines if string s is
                                    //a reserve word
void TokenTrace(int t);             //Records token t in the trace file
void PopulateRWMap(void);           //Create the table of reserve
                                    //words and their token codes.
void PopulateTokenNameMap(void);    //Create a table of names for tokens
                                    //to be printed in the TokenTrace
void ToLower(char* d,char* s);      //Coerce the characters of string s
                                    //to lower case. Put the result
                                    //in string d.
//--------------------------------------------------------------------
//Exceptions
//--------------------------------------------------------------------
//A BadCharacterException is thrown when a character outside the
//defined set of characters for the Pascal language appears in the
//source.
//--------------------------------------------------------------------
struct BadCharacterException{    
    BadCharacterException(char p,int l,int c)
    {
        cout << endl;
        cout << "line(" << l << ") col (" << c << ")" ;
        cout << "Lexical error: ";
        cout << "Illegal character |" << p << "| ASCII code=" << (int)p;
        cout << endl;
    }
};
%}
%%
[\n]                {
                        line++;
                        col=1;
                    }
[\r]                ;
[\{][^{]*[^}][\}]   ;
[ \t]+              {
                        col+=yyleng;
                    }
[0-9]+                                  return TokenMgr(INTLIT);
[']([^']+|('){2}+)+[']                  return TokenMgr(CHRLIT);
[0-9]+(\.[0-9]+)(E[+\-]{0,1}[0-9]+)?    return TokenMgr(REALIT);
[_a-zA-Z][_a-zA-Z0-9]*                  return TokenMgr(ID);
":="            return TokenMgr(ASSIGN);
";"             return TokenMgr(SEMICOLON);
","             return TokenMgr(COMMA);
"("             return TokenMgr(LPAREN);
")"             return TokenMgr(RPAREN);
"+"             return TokenMgr(PLUS);
"-"             return TokenMgr(MINUS);
"["             return TokenMgr(LBRACKET);
"]"             return TokenMgr(RBRACKET);
"/"             return TokenMgr(SLASH);
"*"             return TokenMgr(STAR);
">"             return TokenMgr(GREATERTHAN);
">="            return TokenMgr(GREATERTHANEQUAL);
"<"             return TokenMgr(LESSTHAN);
"<="            return TokenMgr(LESSTHANEQUAL);
"<>"            return TokenMgr(DIAMOND);
"."             return TokenMgr(PERIOD);
":"             return TokenMgr(COLON);
".."            return TokenMgr(DOUBLEPERIOD);
"="             return TokenMgr(EQUAL);
.               {
                    throw BadCharacterException(*yytext, line, col);
                }
%%
//--------------------------------------------------------------------
//Class Lexer implementation
//--------------------------------------------------------------------
//Function ReserveWord determines if the input string is a reserve
//word and if it is the function returns the corresponding tokencode.
//Otherwise it returns the tokencode ID.
//--------------------------------------------------------------------
int ReserveWord(char* s)
{
    int t=RW[(string)s];
    if (t>0) return t; 
    else return ID;
}
//--------------------------------------------------------------------
//Function ToLower coerces the characters of string s to lower case
//and stores the result in string d.
//--------------------------------------------------------------------
void ToLower(char* d,char* s)
{
    strcpy(d,s);
    for (int a=0;a<strlen(d);a++) d[a]=tolower(d[a]);
}
//--------------------------------------------------------------------
//Function TokenMgr processes the token after it has been recognized
//--------------------------------------------------------------------
int TokenMgr(int t)
{
    col+=yyleng;    //Add the length of the current
                    //Token to the column position
    if (t==ID) {
        char* s = new char[yyleng];     //Create storage for a lower case
                                        //version of the token
        ToLower(s,yytext);      //Coerce the token to lower case
        yylval.token= new string(s);    //yylval is the yacc variable
                                        //associated with the %union
                                        //directive.  Member token was
                                        //declared to have the semantic
                                        //value for tokens.
        t=ReserveWord(s);   //Determine if the ID is a reserve word
    }
    TokenTrace(t);      //Record the current token in the trace file
    return t;
}
//--------------------------------------------------------------------
//-----------------------------------------------------------------------
//Function TokenTrace records the attributes of the input token t
//in the trace file.
//-----------------------------------------------------------------------
void TokenTrace(int tkn)
{
    tfs << endl;
    tfs << "Token:Code=" << tkn;
    tfs << " Name=" << setw(10) << TokenName[tkn];
    tfs << " line =" << setw(4) << line;
    tfs << " col =" << setw(4) << col-yyleng;
    tfs << " Spelling=\"" << yytext << "\"";
}
//--------------------------------------------------------------------
//Function PopulateRWMap assigns values to the map, RW, such that each
//reserve word is given its associated tokencode.
//--------------------------------------------------------------------
void PopulateRWMap(void)
{
    RW["program"    ]=PROGRAM;
    RW["var"        ]=VAR;
    RW["array"      ]=ARRAY;
    RW["of"         ]=OF;
    RW["function"   ]=FUNCTION;
    RW["procedure"  ]=FUNCTION;
    RW["begin"      ]=BEGAN;
    RW["end"        ]=END;
    RW["if"         ]=IF;
    RW["then"       ]=THEN;
    RW["else"       ]=ELSE;
    RW["while"      ]=WHILE;
    RW["do"         ]=DO;
    RW["repeat"     ]=REPEAT;
    RW["until"      ]=UNTIL;
    RW["for"        ]=FOR;
    RW["to"         ]=TO;
    RW["downto"     ]=DOWNTO;
    RW["div"        ]=DIV;
    RW["mod"        ]=MOD;
    RW["and"        ]=AND;
    RW["not"        ]=NOT;
}

void PopulateTokenNameMap(void)
{
    TokenName[PROGRAM           ] = "PROGRAM";
    TokenName[SEMICOLON         ] = "SEMICOLON";
    TokenName[PERIOD            ] = "PERIOD";
    TokenName[LPAREN            ] = "LPAREN";
    TokenName[RPAREN            ] = "RPAREN";
    TokenName[ID                ] = "ID";
    TokenName[COMMA             ] = "COMMA";
    TokenName[COLON             ] = "COLON";
    TokenName[VAR               ] = "VAR";
    TokenName[ARRAY             ] = "ARRAY";
    TokenName[LBRACKET          ] = "LBRACKET";
    TokenName[RBRACKET          ] = "RBRACKET";
    TokenName[INTLIT            ] = "INTLIT";
    TokenName[DOUBLEPERIOD      ] = "DOUBLEPERIOD";
    TokenName[OF                ] = "OF";
    TokenName[FUNCTION          ] = "FUNCTION";
    TokenName[PROCEDURE         ] = "PROCEDURE";
    TokenName[BEGAN             ] = "BEGAN";
    TokenName[END               ] = "END";
    TokenName[ASSIGN            ] = "ASSIGN";
    TokenName[IF                ] = "IF";
    TokenName[THEN              ] = "THEN";
    TokenName[ELSE              ] = "ELSE";
    TokenName[WHILE             ] = "WHILE";
    TokenName[DO                ] = "DO";
    TokenName[REPEAT            ] = "REPEAT";
    TokenName[UNTIL             ] = "UNTIL";
    TokenName[FOR               ] = "FOR";
    TokenName[TO                ] = "TO";
    TokenName[DOWNTO            ] = "DOWNTO";
    TokenName[EQUAL             ] = "EQUAL";
    TokenName[DIAMOND           ] = "DIAMOND";
    TokenName[LESSTHAN          ] = "LESSTHAN";
    TokenName[LESSTHANEQUAL     ] = "LESSTHANEQUAL";
    TokenName[GREATERTHAN       ] = "GREATERTHAN";
    TokenName[GREATERTHANEQUAL  ] = "GREATERTHANEQUAL";
    TokenName[PLUS              ] = "PLUS";
    TokenName[MINUS             ] = "MINUS";
    TokenName[OR                ] = "OR";
    TokenName[STAR              ] = "STAR";
    TokenName[SLASH             ] = "SLASH";
    TokenName[DIV               ] = "DIV";
    TokenName[MOD               ] = "MOD";
    TokenName[AND               ] = "AND";
    TokenName[NOT               ] = "NOT";
    TokenName[REALIT            ] = "REALIT";
    TokenName[CHRLIT            ] = "CHRLIT";
    TokenName[ERROR             ] = "ERROR";
}
//--------------------------------------------------------------------
//Constructor Lexer is used to redirect the input file stream from the
//keyboard to input file stream i.
//--------------------------------------------------------------------
Lexer::Lexer(FILE* i)
{
    yyin=i;
    PopulateRWMap();
    PopulateTokenNameMap();
}
//-----------------------End of Lex Definition-----------------------