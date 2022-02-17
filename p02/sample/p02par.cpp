/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "p02par.y" /* yacc.c:339  */

//---------------------------------------------------------------------
//File p02par.y contains a specification for Subset Pascal
//defined by Daniel L. Tomei
//---------------------------------------------------------------------
// Author: Daniel L. Tomei
// E-Mail: dtomei@uco.edu
// Date:   September, 2020
//---------------------------------------------------------------------
//C++ include files
//---------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
//Application inlcude files
//---------------------------------------------------------------------
#include "p02lex.h"
#include "p02par.h"
//---------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------
void yyerror(const char* m);
//---------------------------------------------------------------------
//Externals
//---------------------------------------------------------------------
extern char* yytext;
extern ofstream tfs;
extern int line;
extern int col;

#line 101 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    SEMICOLON = 259,
    PERIOD = 260,
    LPAREN = 261,
    RPAREN = 262,
    ID = 263,
    COMMA = 264,
    COLON = 265,
    VAR = 266,
    ARRAY = 267,
    LBRACKET = 268,
    RBRACKET = 269,
    INTLIT = 270,
    DOUBLEPERIOD = 271,
    OF = 272,
    FUNCTION = 273,
    PROCEDURE = 274,
    BEGAN = 275,
    END = 276,
    ASSIGN = 277,
    IF = 278,
    THEN = 279,
    ELSE = 280,
    WHILE = 281,
    DO = 282,
    REPEAT = 283,
    UNTIL = 284,
    FOR = 285,
    TO = 286,
    DOWNTO = 287,
    EQUAL = 288,
    DIAMOND = 289,
    LESSTHAN = 290,
    LESSTHANEQUAL = 291,
    GREATERTHAN = 292,
    GREATERTHANEQUAL = 293,
    PLUS = 294,
    MINUS = 295,
    OR = 296,
    STAR = 297,
    SLASH = 298,
    DIV = 299,
    MOD = 300,
    AND = 301,
    NOT = 302,
    REALIT = 303,
    CHRLIT = 304,
    ERROR = 305
  };
#endif
/* Tokens.  */
#define PROGRAM 258
#define SEMICOLON 259
#define PERIOD 260
#define LPAREN 261
#define RPAREN 262
#define ID 263
#define COMMA 264
#define COLON 265
#define VAR 266
#define ARRAY 267
#define LBRACKET 268
#define RBRACKET 269
#define INTLIT 270
#define DOUBLEPERIOD 271
#define OF 272
#define FUNCTION 273
#define PROCEDURE 274
#define BEGAN 275
#define END 276
#define ASSIGN 277
#define IF 278
#define THEN 279
#define ELSE 280
#define WHILE 281
#define DO 282
#define REPEAT 283
#define UNTIL 284
#define FOR 285
#define TO 286
#define DOWNTO 287
#define EQUAL 288
#define DIAMOND 289
#define LESSTHAN 290
#define LESSTHANEQUAL 291
#define GREATERTHAN 292
#define GREATERTHANEQUAL 293
#define PLUS 294
#define MINUS 295
#define OR 296
#define STAR 297
#define SLASH 298
#define DIV 299
#define MOD 300
#define AND 301
#define NOT 302
#define REALIT 303
#define CHRLIT 304
#define ERROR 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "p02par.y" /* yacc.c:355  */

    string* token;

#line 245 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 262 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    94,    98,   102,   106,   110,   114,   118,
     122,   126,   130,   134,   138,   142,   146,   150,   154,   158,
     162,   166,   170,   174,   178,   182,   186,   190,   194,   198,
     202,   206,   210,   214,   218,   222,   226,   230,   234,   238,
     242,   246,   250,   254,   258,   262,   266,   270,   274,   278,
     282,   286,   290,   294,   298,   302,   306,   310,   314,   318,
     322,   326,   330,   334,   338,   342,   346,   350,   354,   358,
     362,   366,   370,   374,   378,   382,   386,   390,   394,   398,
     402
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "SEMICOLON", "PERIOD",
  "LPAREN", "RPAREN", "ID", "COMMA", "COLON", "VAR", "ARRAY", "LBRACKET",
  "RBRACKET", "INTLIT", "DOUBLEPERIOD", "OF", "FUNCTION", "PROCEDURE",
  "BEGAN", "END", "ASSIGN", "IF", "THEN", "ELSE", "WHILE", "DO", "REPEAT",
  "UNTIL", "FOR", "TO", "DOWNTO", "EQUAL", "DIAMOND", "LESSTHAN",
  "LESSTHANEQUAL", "GREATERTHAN", "GREATERTHANEQUAL", "PLUS", "MINUS",
  "OR", "STAR", "SLASH", "DIV", "MOD", "AND", "NOT", "REALIT", "CHRLIT",
  "ERROR", "$accept", "program", "program_head", "program_declarations",
  "program_body", "program_parameters", "program_parameter_list",
  "identifier_list", "declarations", "type", "standard_type",
  "subprogram_declarations", "subprogram_declaration", "subprogram_head",
  "subprogram_parameters", "parameter_list", "compound_statement",
  "optional_statements", "statement_list", "statement",
  "alternative_statement", "iterative_statement", "if_statement",
  "while_statement", "repeat_statement", "for_statement", "variable",
  "procedure_statement", "expression_list", "expression", "relop",
  "simple_expression", "sign", "addop", "term", "mulop", "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -45

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      20,    42,    74,  -124,    51,  -124,    69,    56,    78,    86,
      35,  -124,    87,    78,    17,  -124,    84,    95,  -124,     3,
       0,     0,    35,    97,  -124,    85,   103,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,    88,  -124,  -124,    67,   100,   101,
     107,  -124,  -124,   104,     0,     0,     0,    16,  -124,  -124,
    -124,     5,  -124,  -124,    89,    62,     5,   -12,  -124,    90,
      13,   105,    92,  -124,    35,     0,    48,   113,   113,  -124,
       1,  -124,    57,  -124,   106,   114,     0,     0,  -124,    35,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,     0,
       5,   -12,  -124,  -124,  -124,  -124,  -124,     5,    35,     0,
       0,  -124,  -124,  -124,   109,   119,  -124,    78,   116,   120,
    -124,  -124,     0,  -124,  -124,    66,    10,   102,    30,   -12,
    -124,  -124,  -124,    47,   115,  -124,    73,    55,   121,  -124,
    -124,  -124,  -124,    35,     0,     0,   112,    48,    78,  -124,
     127,  -124,   108,   110,   117,  -124,    75,  -124,    35,    35,
     122,    48,  -124,  -124,   123,  -124,   121,  -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     6,     1,     0,    16,     0,     0,
      26,     2,     0,     0,     4,     9,     0,     8,     3,    46,
       0,     0,     0,     0,    34,     0,    27,    28,    32,    33,
      35,    36,    37,    38,     0,    31,     5,     0,     0,     0,
       0,    11,     7,     0,     0,     0,     0,    73,    78,    60,
      61,     0,    79,    80,     0,    50,     0,    58,    66,     0,
       0,    44,     0,    25,     0,     0,     0,    21,    21,    17,
       0,    10,     0,    48,     0,     0,     0,     0,    77,     0,
      52,    53,    54,    55,    56,    57,    63,    64,    65,     0,
       0,    59,    68,    69,    70,    71,    72,     0,     0,     0,
       0,    29,    30,    15,     0,     0,    13,     0,     0,     0,
      18,    47,     0,    45,    76,     0,     0,     0,    51,    62,
      67,    40,    41,     0,     0,    12,     0,     0,     0,    20,
      49,    75,    74,     0,     0,     0,     0,     0,     0,    22,
       0,    39,     0,     0,     0,    23,     0,    19,     0,     0,
       0,     0,    42,    43,     0,    24,     0,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -124,  -124,  -124,  -124,  -124,  -124,  -124,   -13,    93,  -123,
    -118,  -124,  -124,  -124,    65,  -124,    -2,  -124,   124,   -61,
    -124,  -124,  -124,  -124,  -124,  -124,   118,  -124,   -32,   -19,
    -124,    49,  -124,  -124,   -49,  -124,   -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,    11,     9,    16,    17,     7,   105,
     106,    14,    40,    41,   108,   127,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    72,    73,
      89,    55,    56,    90,    57,    97,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    54,    59,   101,    12,    78,    46,    91,    47,    44,
     140,    46,    13,    47,   145,    48,    45,    64,   117,   112,
      48,    10,    76,     1,   132,   -44,    74,    75,   155,    77,
      92,    93,    94,    95,    96,    38,    39,   121,   157,    49,
      50,   119,    99,    19,   115,   116,   102,    51,    52,    53,
       4,   120,    51,    52,    53,    10,   103,     8,    20,   138,
     104,    21,   139,    22,   111,    23,   112,    13,   110,    86,
      87,    88,   141,   131,     5,   112,    43,    66,   134,   135,
     122,   123,    43,   137,    43,   151,    15,   152,   153,    10,
      18,    42,    36,   130,   126,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    43,    61,    63,    64,    67,    68,
      65,    69,    71,    79,   100,   142,   143,    98,    45,   107,
     113,   114,   124,   125,   129,   146,   128,   133,   144,   103,
     136,   147,   150,   109,    70,   148,   154,   149,   118,     0,
     156,    62,     0,     0,     0,     0,    60
};

static const yytype_int16 yycheck[] =
{
      13,    20,    21,    64,     6,    51,     6,    56,     8,     6,
     128,     6,    11,     8,   137,    15,    13,     4,    79,     9,
      15,    20,     6,     3,    14,    22,    45,    46,   151,    13,
      42,    43,    44,    45,    46,    18,    19,    98,   156,    39,
      40,    90,    29,     8,    76,    77,    65,    47,    48,    49,
       8,    97,    47,    48,    49,    20,     8,     6,    23,     4,
      12,    26,     7,    28,     7,    30,     9,    11,    70,    39,
      40,    41,   133,     7,     0,     9,     9,    10,    31,    32,
      99,   100,     9,    10,     9,    10,     8,   148,   149,    20,
       4,     7,     5,   112,   107,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     9,     8,    21,     4,     8,     8,
      22,     4,     8,    24,    22,   134,   135,    27,    13,     6,
      14,     7,    13,     4,     4,   138,    10,    25,    16,     8,
      15,     4,    15,    68,    41,    27,    14,    27,    89,    -1,
      17,    23,    -1,    -1,    -1,    -1,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    53,     8,     0,    54,    59,     6,    56,
      20,    55,    67,    11,    62,     8,    57,    58,     4,     8,
      23,    26,    28,    30,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     5,    58,    18,    19,
      63,    64,     7,     9,     6,    13,     6,     8,    15,    39,
      40,    47,    48,    49,    80,    82,    83,    85,    87,    80,
      69,     8,    77,    21,     4,    22,    10,     8,     8,     4,
      59,     8,    79,    80,    80,    80,     6,    13,    87,    24,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    81,
      84,    85,    42,    43,    44,    45,    46,    86,    27,    29,
      22,    70,    80,     8,    12,    60,    61,     6,    65,    65,
      67,     7,     9,    14,     7,    79,    79,    70,    82,    85,
      87,    70,    80,    80,    13,     4,    58,    66,    10,     4,
      80,     7,    14,    25,    31,    32,    15,    10,     4,     7,
      61,    70,    80,    80,    16,    60,    58,     4,    27,    27,
      15,    10,    70,    70,    14,    60,    17,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    55,    56,    56,    57,    58,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    64,
      64,    65,    65,    66,    66,    67,    68,    68,    69,    69,
      70,    70,    70,    70,    70,    71,    72,    72,    72,    73,
      74,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    82,    84,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     2,     2,     0,     3,     1,     1,
       3,     0,     6,     1,     8,     1,     0,     3,     3,     6,
       4,     0,     3,     3,     5,     3,     0,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       4,     4,     8,     8,     1,     4,     1,     4,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     2,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 91 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#001 program -> program_head program_declarations program_body";
    }
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 95 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#002 program_head -> program ID program_parameters ;";
    }
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 99 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#003 program_declarations -> declarations subprogram_declarations";
    }
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#004 program_body -> compound_statement .";
    }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 107 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#005 program_parameters -> empty";
    }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#006 program_parameters -> ( program_parameter_list )";
    }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 115 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#007 program_parameter_list -> identifier_list";
    }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#008 identifier_list -> ID";
    }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#009 identifier_list -> identifier_list , ID";
    }
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#010 declarations -> empty";
    }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 131 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#011 declarations -> declarations var identifier_list : type ;";
    }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 135 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#012 type -> standard_type";
    }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 139 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#013 type -> array [ INTLIT .. INTLIT ] of standard_type";
    }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 143 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#014 standard_type -> ID";
    }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#015 subprogram_declarations -> empty";
    }
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 151 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#016 subprogram_declarations -> subprogram_declarations subprogram_declaration ;";
    }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#017 subprogram_declaration -> subprogram_head declarations compound_statement";
    }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#018 subprogram_head -> function ID subprogram_parameters : standard_type ;";
    }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 163 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#019 subprogram_head -> procedure ID subprogram_parameters ;";
    }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 167 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#020 subprogram_parameters -> empty";
    }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#021 subprogram_parameters -> ( parameter_list )";
    }
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 175 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#022 parameter_list -> identifier_list : type";
    }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 179 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#023 parameter_list -> parameter_list ; identifier_list : type";
    }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 183 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#024 compound_statement -> begin optional_statements end";
    }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 187 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#025 optional_statements -> empty";
    }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 191 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#026 optional_statements -> statement_list";
    }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 195 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#027 statement_list -> statement";
    }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 199 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#028 statement_list -> statement_list ; statement";
    }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 203 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#029 statement -> variable := expression";
    }
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 207 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#030 statement -> procedure_statement";
    }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 211 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#031 statement -> alternative_statement";
    }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 215 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#032 statement -> iterative_statement";
    }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 219 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#033 statement -> compound_statement";
    }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 223 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#034 alternative_statement -> if_statement";
    }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 227 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#035 iterative_statement -> while_statement";
    }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 231 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#036 iterative_statement -> repeat_statement";
    }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 235 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#037 iterative_statement -> repeat_statement";
    }
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 239 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#038 if_statement -> if expression then statement else statement";
    }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 243 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#039 while_statement -> while expression do statement";
    }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 247 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#040 repeat_statement -> repeat statement_list until expression";
    }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 251 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#041 for_statement -> for variable := expression to expression do statement";
    }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 255 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#042 for_statement -> for variable := expression downto expression do statement";
    }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 259 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#043 variable -> ID";
    }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 263 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#044 variable -> id [ expression ]";
    }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 267 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#045 procedure_statement -> id";
    }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 271 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#046 procedure_statement -> id ( expression_list )";
    }
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 275 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#047 expression_list -> expression";
    }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 279 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#048 expression_list -> expression_list , expression";
    }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 283 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#049 expression -> simple_expression";
    }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 287 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#050 expression -> simple_expression relop simple_expression";
    }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 291 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#051 relop -> =";
    }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 295 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#052 relop -> <>";
    }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 299 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#053 relop -> <";
    }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 303 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#054 relop -> <=";
    }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 307 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#055 relop -> >";
    }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 311 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#056 relop -> >=";
    }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 315 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#057 simple_expression -> term";
    }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 319 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#058 simple_expression -> sign term";
    }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 323 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#059 sign -> +";
    }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 327 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#060 sign -> -";
    }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 331 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#061 simple_expression -> simple_expression addop term";
    }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 335 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#062 addop -> +";
    }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 339 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#063 addop -> -";
    }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 343 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#064 addop -> or";
    }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 347 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#065 term -> factor";
    }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 351 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#066 term -> term mulop factor";
    }
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 355 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#067 mulop -> *";
    }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 359 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#068 mulop -> /";
    }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 363 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#069 mulop -> div";
    }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 367 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#070 mulop -> mod";
    }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 371 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#071 mulop -> and";
    }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 375 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#072 factor -> id";
    }
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 379 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#073 factor -> id [ expression_list ]";
    }
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 383 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#074 factor -> id ( expression_list )";
    }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 387 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#075 factor -> ( expression )";
    }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 391 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#076 factor -> not factor";
    }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 395 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#077 factor -> intlit";
    }
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 399 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#078 factor -> realit";
    }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 403 "p02par.y" /* yacc.c:1646  */
    {tfs << endl << "#079 factor -> chrlit";
    }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2006 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 405 "p02par.y" /* yacc.c:1906  */

//-----------------------------------------------------------------------
//User function section
//-----------------------------------------------------------------------
void yyerror(const char* m)
{
    cout << endl
        << "line(" << line << ") col(" << col << ") " << m;
    cout << endl;
}
