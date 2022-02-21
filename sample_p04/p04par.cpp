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
#line 1 "p04par.y" /* yacc.c:339  */

//---------------------------------------------------------------------
//File p04par.y contains a specification for pasm
//---------------------------------------------------------------------
// Team Identification Block
// Author 1: 	Daniel L. Tomei
// Student ID: 	*20491050
// E-Mail: 	dtomei@uco.edu
// CRN: 	13855, Fall, 2020
// Author 2: 	Aditi Panvelkar
// Student ID: 	*20490610
// E-Mail: 	apanvelkar@uco.edu
// CRN: 	13855, Fall, 2020
// Course: 	CMSC 5023 – Programming Languages
// Project: 	p04
// Due: 	December 10, 2020
// Project Account Number: tt162
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
#include "p04lex.h"
#include "p04par.h"
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

#line 110 "y.tab.c" /* yacc.c:339  */

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
    CUP_O = 258,
    CSP_O = 259,
    ENT_O = 260,
    MST_O = 261,
    RTN_O = 262,
    EQU_O = 263,
    NEQ_O = 264,
    GRT_O = 265,
    GEQ_O = 266,
    LES_O = 267,
    LEQ_O = 268,
    ADI_O = 269,
    SBI_O = 270,
    NGI_O = 271,
    MPI_O = 272,
    DVI_O = 273,
    MOD_O = 274,
    ABI_O = 275,
    SQI_O = 276,
    INC_O = 277,
    DEC_O = 278,
    ADR_O = 279,
    SBR_O = 280,
    NGR_O = 281,
    MPR_O = 282,
    DVR_O = 283,
    ABR_O = 284,
    SQR_O = 285,
    IOR_O = 286,
    AND_O = 287,
    XOR_O = 288,
    NOT_O = 289,
    INN_O = 290,
    UNI_O = 291,
    NTR_O = 292,
    DIF_O = 293,
    CMP_O = 294,
    SGS_O = 295,
    UJP_O = 296,
    XJP_O = 297,
    FJP_O = 298,
    TJP_O = 299,
    FLT_O = 300,
    FLO_O = 301,
    TRC_O = 302,
    RND_O = 303,
    CHR_O = 304,
    ORD_O = 305,
    STP_O = 306,
    LDA_O = 307,
    LDC_O = 308,
    LDI_O = 309,
    LVA_O = 310,
    LVB_O = 311,
    LVC_O = 312,
    LVI_O = 313,
    LVR_O = 314,
    LVS_O = 315,
    LVT_O = 316,
    STI_O = 317,
    IXA_O = 318,
    RDB_F = 319,
    RDC_F = 320,
    RDI_F = 321,
    RDR_F = 322,
    RLN_F = 323,
    WRB_F = 324,
    WRC_F = 325,
    WRI_F = 326,
    WRE_F = 327,
    WRF_F = 328,
    WRS_F = 329,
    WRT_F = 330,
    WLN_F = 331,
    SQT_F = 332,
    LN_F = 333,
    EXP_F = 334,
    SP_R = 335,
    EP_R = 336,
    MP_R = 337,
    PC_R = 338,
    NP_R = 339,
    A_T = 340,
    B_T = 341,
    C_T = 342,
    I_T = 343,
    R_T = 344,
    S_T = 345,
    T_T = 346,
    P_T = 347,
    X_T = 348,
    DEFINE = 349,
    LABEL = 350,
    INTLIT = 351,
    REALIT = 352,
    CHRLIT = 353,
    STRLIT = 354,
    ID = 355,
    ERROR = 356
  };
#endif
/* Tokens.  */
#define CUP_O 258
#define CSP_O 259
#define ENT_O 260
#define MST_O 261
#define RTN_O 262
#define EQU_O 263
#define NEQ_O 264
#define GRT_O 265
#define GEQ_O 266
#define LES_O 267
#define LEQ_O 268
#define ADI_O 269
#define SBI_O 270
#define NGI_O 271
#define MPI_O 272
#define DVI_O 273
#define MOD_O 274
#define ABI_O 275
#define SQI_O 276
#define INC_O 277
#define DEC_O 278
#define ADR_O 279
#define SBR_O 280
#define NGR_O 281
#define MPR_O 282
#define DVR_O 283
#define ABR_O 284
#define SQR_O 285
#define IOR_O 286
#define AND_O 287
#define XOR_O 288
#define NOT_O 289
#define INN_O 290
#define UNI_O 291
#define NTR_O 292
#define DIF_O 293
#define CMP_O 294
#define SGS_O 295
#define UJP_O 296
#define XJP_O 297
#define FJP_O 298
#define TJP_O 299
#define FLT_O 300
#define FLO_O 301
#define TRC_O 302
#define RND_O 303
#define CHR_O 304
#define ORD_O 305
#define STP_O 306
#define LDA_O 307
#define LDC_O 308
#define LDI_O 309
#define LVA_O 310
#define LVB_O 311
#define LVC_O 312
#define LVI_O 313
#define LVR_O 314
#define LVS_O 315
#define LVT_O 316
#define STI_O 317
#define IXA_O 318
#define RDB_F 319
#define RDC_F 320
#define RDI_F 321
#define RDR_F 322
#define RLN_F 323
#define WRB_F 324
#define WRC_F 325
#define WRI_F 326
#define WRE_F 327
#define WRF_F 328
#define WRS_F 329
#define WRT_F 330
#define WLN_F 331
#define SQT_F 332
#define LN_F 333
#define EXP_F 334
#define SP_R 335
#define EP_R 336
#define MP_R 337
#define PC_R 338
#define NP_R 339
#define A_T 340
#define B_T 341
#define C_T 342
#define I_T 343
#define R_T 344
#define S_T 345
#define T_T 346
#define P_T 347
#define X_T 348
#define DEFINE 349
#define LABEL 350
#define INTLIT 351
#define REALIT 352
#define CHRLIT 353
#define STRLIT 354
#define ID 355
#define ERROR 356

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "p04par.y" /* yacc.c:355  */

    string* token;

#line 356 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 373 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  124
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   356

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   153,   157,   161,   165,   169,   173,   177,
     181,   185,   189,   193,   197,   201,   205,   209,   213,   217,
     221,   225,   229,   233,   237,   241,   245,   249,   253,   257,
     261,   265,   269,   273,   277,   281,   285,   289,   293,   297,
     301,   305,   309,   313,   317,   321,   325,   329,   333,   337,
     341,   345,   349,   353,   357,   361,   365,   369,   373,   377,
     381,   385,   389,   393,   397,   401,   405,   409,   413,   417,
     421,   425,   429,   433,   437,   441,   445,   449,   453,   457,
     461,   465,   469,   473,   477,   481,   485,   489,   493,   497,
     501,   505,   509,   513,   517,   521,   525,   529,   533,   537,
     541
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CUP_O", "CSP_O", "ENT_O", "MST_O",
  "RTN_O", "EQU_O", "NEQ_O", "GRT_O", "GEQ_O", "LES_O", "LEQ_O", "ADI_O",
  "SBI_O", "NGI_O", "MPI_O", "DVI_O", "MOD_O", "ABI_O", "SQI_O", "INC_O",
  "DEC_O", "ADR_O", "SBR_O", "NGR_O", "MPR_O", "DVR_O", "ABR_O", "SQR_O",
  "IOR_O", "AND_O", "XOR_O", "NOT_O", "INN_O", "UNI_O", "NTR_O", "DIF_O",
  "CMP_O", "SGS_O", "UJP_O", "XJP_O", "FJP_O", "TJP_O", "FLT_O", "FLO_O",
  "TRC_O", "RND_O", "CHR_O", "ORD_O", "STP_O", "LDA_O", "LDC_O", "LDI_O",
  "LVA_O", "LVB_O", "LVC_O", "LVI_O", "LVR_O", "LVS_O", "LVT_O", "STI_O",
  "IXA_O", "RDB_F", "RDC_F", "RDI_F", "RDR_F", "RLN_F", "WRB_F", "WRC_F",
  "WRI_F", "WRE_F", "WRF_F", "WRS_F", "WRT_F", "WLN_F", "SQT_F", "LN_F",
  "EXP_F", "SP_R", "EP_R", "MP_R", "PC_R", "NP_R", "A_T", "B_T", "C_T",
  "I_T", "R_T", "S_T", "T_T", "P_T", "X_T", "DEFINE", "LABEL", "INTLIT",
  "REALIT", "CHRLIT", "STRLIT", "ID", "ERROR", "$accept", "program",
  "list", "item", "definition", "statement", "label_list", "operation",
  "class0_operation", "class1_operation", "class2_operation",
  "class3_operation", "type", "register", "stdfunction", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356
};
# endif

#define YYPACT_NINF -79

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -3,   -78,    75,    76,   -77,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -75,   -68,   -58,   -50,   -79,   -79,
     -79,   -79,   -49,   -24,   -27,   -26,   -25,    -6,     3,    13,
      21,    22,   -24,    23,    60,   -79,    46,    -3,   -79,   -79,
     -79,    69,   -79,   -79,   -79,   -79,   -79,    66,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
      67,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,    77,    70,    78,    79,    80,    81,    82,    84,    85,
      86,   -79,   -79,    87,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,    18,    19,    20,    22,    21,    23,
      24,    25,    26,    27,    28,    29,    31,    30,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,    38,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     2,     3,     6,
       5,     0,     9,    12,    13,    14,    15,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    51,    80,    81,    82,    83,    84,
       0,    42,    73,    74,    75,    76,    77,    78,    79,    72,
      43,    44,    45,    48,    49,    46,    47,    52,    55,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    56,     0,     1,     4,    11,     8,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     7
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,   -79,   106,   -79,   -79,   -79,   104,   -79,   -79,
     -79,   -79,   127,   -79,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,   100,    90,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    67,    91,
     107,    19,    20,    21,    22,    23,    24,   108,    25,    26,
      27,    28,    29,    30,    31,    32,    33,   109,    34,    35,
      36,    37,    38,    39,    40,   110,   124,   111,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    92,    93,    94,    95,    96,    97,    98,    99,   113,
     114,   115,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     116,    54,    55,    19,    20,    21,    22,    23,    24,   117,
      25,    26,    27,    28,    29,    30,    31,    32,    33,   118,
      34,    35,    36,    37,    38,    39,    40,   119,   120,   122,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   101,   102,   103,   104,   105,   106,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   123,    85,    86,    87,    88,
      89,   128,   129,   125,   126,   127,   131,   132,   133,   134,
     112,     0,     0,   130,   135,   136,   137,   138,   139,   121,
     140,   141,   142,   143
};

static const yytype_int8 yycheck[] =
{
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    96,    96,
      95,    24,    25,    26,    27,    28,    29,    95,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    95,    41,    42,
      43,    44,    45,    46,    47,    95,     0,    96,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    85,    86,    87,    88,    89,    90,    91,    92,    96,
      96,    96,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      96,    94,    95,    24,    25,    26,    27,    28,    29,    96,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    96,
      41,    42,    43,    44,    45,    46,    47,    96,    96,    96,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     6,     7,     8,     9,    10,    11,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    95,    80,    81,    82,    83,
      84,    95,    95,    57,    95,    61,    96,    97,    98,    99,
      43,    -1,    -1,    96,    96,    96,    96,    96,    96,    52,
      96,    96,    96,    96
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    24,
      25,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    41,    42,    43,    44,    45,    46,
      47,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    94,    95,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    96,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,   116,    80,    81,    82,    83,    84,
     115,    96,    85,    86,    87,    88,    89,    90,    91,    92,
     114,   114,   114,   114,   114,   114,   114,    95,    95,    95,
      95,    96,   114,    96,    96,    96,    96,    96,    96,    96,
      96,   114,    96,    95,     0,   105,    95,   109,    95,    95,
      96,    96,    97,    98,    99,    96,    96,    96,    96,    96,
      96,    96,    96,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   104,   104,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 150 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "program -> list";
    }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 154 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "list -> item";
    }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 158 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "list -> list item";
    }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "item -> statement";
    }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 166 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "item -> definition";
    }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 170 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "definition -> DEFINE LABEL INTLIT";
    }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 174 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "statement -> label_list operation";
    }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 178 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "statement -> operation";
    }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 182 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "label_list -> LABEL";
    }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "label_list -> label_list LABEL";
    }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 190 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "operation -> class0_operation";
    }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 194 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "operation -> class1_operation";
    }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "operation -> class2_operation";
    }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 202 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "operation -> class3_operation";
    }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 206 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> ADI_O";
    }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 210 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> SBI_O";
    }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 214 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> NGI_O";
    }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 218 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> MPI_O";
    }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 222 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> DVI_O";
    }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 226 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> ABI_O";
    }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 230 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> MOD_O";
    }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 234 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> ADR_O";
    }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 238 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> SBR_O";
    }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 242 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> NGR_O";
    }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 246 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> MPR_O";
    }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 250 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> DVR_O";
    }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 254 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> ABR_O";
    }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 258 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> IOR_O";
    }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 262 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> XOR_O";
    }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 266 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> AND_O";
    }
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 270 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> NOT_O";
    }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 274 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> INN_O";
    }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 278 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> UNI_O";
    }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 282 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> NTR_O";
    }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 286 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> DIF_O";
    }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 290 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> CMP_O";
    }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 294 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> FLT_O";
    }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 298 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> FLO_O";
    }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 302 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> TRC_O";
    }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 306 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class0_operation -> STP_O";
    }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 310 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> MST_O INTLIT";
    }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 314 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> RTN_O type";
    }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 318 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> EQU_O type";
    }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 322 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> NEQ_O type";
    }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 326 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> LES_O type";
    }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 330 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> LEQ_O type";
    }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 334 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> GRT_O type";
    }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 338 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> GEQ_O type";
    }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 342 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class1_operation -> STI_O type";
    }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 346 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class2_operation -> CSP_O stdfunction";
    }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 350 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class2_operation -> UJP_O LABEL";
    }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 354 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class2_operation -> FJP_O LABEL";
    }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 358 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class2_operation -> TJP_O LABEL";
    }
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 362 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class2_operation -> XJP_O LABEL";
    }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 366 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class2_operation -> IXA_O INTLIT";
    }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 370 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> CUP_O INTLIT LABEL";
    }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 374 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> ENT_O register LABEL";
    }
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 378 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LDA_O INTLIT INTLIT";
    }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 382 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LDC_O type INTLIT";
    }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 386 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LDC_O type REALIT";
    }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 390 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LDC_O type CHRLIT";
    }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 394 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LDC_O type STRLIT";
    }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 398 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LDI_O INTLIT INTLIT";
    }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 402 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVA_O INTLIT INTLIT";
    }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 406 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVB_O INTLIT INTLIT";
    }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 410 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVC_O INTLIT INTLIT";
    }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 414 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVI_O INTLIT INTLIT";
    }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 418 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVR_O INTLIT INTLIT";
    }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 422 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVS_O INTLIT INTLIT";
    }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 426 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "class3_operation -> LVT_O INTLIT INTLIT";
    }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 430 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> P_T";
    }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 434 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> A_T";
    }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 438 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> B_T";
    }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 442 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> C_T";
    }
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 446 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> I_T";
    }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 450 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> R_T";
    }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 454 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> S_T";
    }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 458 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "type -> T_T";
    }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 462 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "register -> SP_R";
    }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 466 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "register -> EP_R";
    }
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 470 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "register -> MP_R";
    }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 474 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "register -> PC_R";
    }
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 478 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "register -> NP_R";
    }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 482 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> RDB_F";
    }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 486 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> RDC_F";
    }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 490 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> RDI_F";
    }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 494 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> RDR_F";
    }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 498 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> RLN_F";
    }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 502 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRB_F";
    }
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 506 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRC_F";
    }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 510 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRI_F";
    }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 514 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRE_F";
    }
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 518 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRF_F";
    }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 522 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRS_F";
    }
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 526 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WRT_F";
    }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 530 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> WLN_F";
    }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 534 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> SQT_F";
    }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 538 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> LN_F";
    }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 542 "p04par.y" /* yacc.c:1646  */
    {tfs << endl << "stdfunction -> EXP_F";
    }
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2273 "y.tab.c" /* yacc.c:1646  */
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
#line 546 "p04par.y" /* yacc.c:1906  */

//-----------------------------------------------------------------------
//User function section
//-----------------------------------------------------------------------
void yyerror(const char* m)
{
    cout << endl
        << "line(" << line << ") col(" << col << ") " << m;
    cout << endl;
}
