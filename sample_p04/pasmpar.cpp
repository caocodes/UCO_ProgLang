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
#line 1 "pasmpar.y" /* yacc.c:339  */

//----------------------------------------------------------------------------
//File pasmpar.cpp implements member functions of class pasmpar, 
//the parser for the P-Code Assembler
//----------------------------------------------------------------------------
//Author: Thomas R. Turner
//E-Mail: trturner@uco.edu
//Date:   March, 2003
//----------------------------------------------------------------------------
//Copyright March, 2003 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//----------------------------------------------------------------------------
//C++ include files.
//----------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>
//----------------------------------------------------------------------------
//Application include files
//----------------------------------------------------------------------------
#include "PasmFiles.h"
//#include "PasmScanner.h"
#include "pasmpar.h"
#include "PasmInstruction.h"
#include "pasmpcod.h"
#include "pasmicon.h"
#include "pasmrcon.h"
#include "pasmscon.h"
#include "pasmtcon.h"
#include "pasmlabl.h"
//#include "PasmLabelTable.h"
#include "pasmdir.h"
//----------------------------------------------------------------------------
//Namespaces
//----------------------------------------------------------------------------
using namespace std;
//----------------------------------------------------------------------------
//Externals
//----------------------------------------------------------------------------
extern PasmFiles F;
//----------------------------------------------------------------------------
//Variables global to file pasmpar.y
//----------------------------------------------------------------------------
static pasmpcod IA;
static pasmicon IC;
static pasmrcon    RC;
static pasmscon     TC;
static pasmtcon  SC;
//static PasmLabelTable       LT;
static pasmdir        D;
//----------------------------------------------------------------------------
//Function yyerror is called when the parser yyparse finds a syntax error
//----------------------------------------------------------------------------
void yyerror(const char* );

#line 124 "y.tab.c" /* yacc.c:339  */

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
    LABEL = 258,
    DEFINE = 259,
    INTLIT = 260,
    REALIT = 261,
    STRLIT = 262,
    CHRLIT = 263,
    ID = 264,
    PCODEMNEMONIC = 265,
    CUP_O = 266,
    CSP_O = 267,
    ENT_O = 268,
    MST_O = 269,
    RTN_O = 270,
    EQU_O = 271,
    NEQ_O = 272,
    GRT_O = 273,
    GEQ_O = 274,
    LES_O = 275,
    LEQ_O = 276,
    ADI_O = 277,
    SBI_O = 278,
    NGI_O = 279,
    MPI_O = 280,
    DVI_O = 281,
    MOD_O = 282,
    ABI_O = 283,
    SQI_O = 284,
    INC_O = 285,
    DEC_O = 286,
    ADR_O = 287,
    SBR_O = 288,
    NGR_O = 289,
    MPR_O = 290,
    DVR_O = 291,
    ABR_O = 292,
    SQR_O = 293,
    IOR_O = 294,
    AND_O = 295,
    XOR_O = 296,
    NOT_O = 297,
    INN_O = 298,
    UNI_O = 299,
    INT_O = 300,
    DIF_O = 301,
    CMP_O = 302,
    SGS_O = 303,
    UJP_O = 304,
    XJP_O = 305,
    FJP_O = 306,
    TJP_O = 307,
    FLT_O = 308,
    FLO_O = 309,
    TRC_O = 310,
    RND_O = 311,
    CHR_O = 312,
    ORD_O = 313,
    STP_O = 314,
    LDA_O = 315,
    LDC_O = 316,
    LDI_O = 317,
    LVA_O = 318,
    LVB_O = 319,
    LVC_O = 320,
    LVI_O = 321,
    LVR_O = 322,
    LVS_O = 323,
    STI_O = 324,
    IXA_O = 325,
    PCODETYPE = 326,
    A_T = 327,
    B_T = 328,
    C_T = 329,
    I_T = 330,
    R_T = 331,
    S_T = 332,
    T_T = 333,
    P_T = 334,
    X_T = 335,
    PCODEREGISTER = 336,
    SP_R = 337,
    EP_R = 338,
    MP_R = 339,
    PC_R = 340,
    NP_R = 341,
    PCODEFUNCTION = 342,
    RDB_F = 343,
    RDC_F = 344,
    RDI_F = 345,
    RDR_F = 346,
    RLN_F = 347,
    WRB_F = 348,
    WRC_F = 349,
    WRI_F = 350,
    WRE_F = 351,
    WRF_F = 352,
    WRS_F = 353,
    WLN_F = 354,
    SQT_F = 355,
    LN_F = 356,
    EXP_F = 357,
    ERROR = 358
  };
#endif
/* Tokens.  */
#define LABEL 258
#define DEFINE 259
#define INTLIT 260
#define REALIT 261
#define STRLIT 262
#define CHRLIT 263
#define ID 264
#define PCODEMNEMONIC 265
#define CUP_O 266
#define CSP_O 267
#define ENT_O 268
#define MST_O 269
#define RTN_O 270
#define EQU_O 271
#define NEQ_O 272
#define GRT_O 273
#define GEQ_O 274
#define LES_O 275
#define LEQ_O 276
#define ADI_O 277
#define SBI_O 278
#define NGI_O 279
#define MPI_O 280
#define DVI_O 281
#define MOD_O 282
#define ABI_O 283
#define SQI_O 284
#define INC_O 285
#define DEC_O 286
#define ADR_O 287
#define SBR_O 288
#define NGR_O 289
#define MPR_O 290
#define DVR_O 291
#define ABR_O 292
#define SQR_O 293
#define IOR_O 294
#define AND_O 295
#define XOR_O 296
#define NOT_O 297
#define INN_O 298
#define UNI_O 299
#define INT_O 300
#define DIF_O 301
#define CMP_O 302
#define SGS_O 303
#define UJP_O 304
#define XJP_O 305
#define FJP_O 306
#define TJP_O 307
#define FLT_O 308
#define FLO_O 309
#define TRC_O 310
#define RND_O 311
#define CHR_O 312
#define ORD_O 313
#define STP_O 314
#define LDA_O 315
#define LDC_O 316
#define LDI_O 317
#define LVA_O 318
#define LVB_O 319
#define LVC_O 320
#define LVI_O 321
#define LVR_O 322
#define LVS_O 323
#define STI_O 324
#define IXA_O 325
#define PCODETYPE 326
#define A_T 327
#define B_T 328
#define C_T 329
#define I_T 330
#define R_T 331
#define S_T 332
#define T_T 333
#define P_T 334
#define X_T 335
#define PCODEREGISTER 336
#define SP_R 337
#define EP_R 338
#define MP_R 339
#define PC_R 340
#define NP_R 341
#define PCODEFUNCTION 342
#define RDB_F 343
#define RDC_F 344
#define RDI_F 345
#define RDR_F 346
#define RLN_F 347
#define WRB_F 348
#define WRC_F 349
#define WRI_F 350
#define WRE_F 351
#define WRF_F 352
#define WRS_F 353
#define WLN_F 354
#define SQT_F 355
#define LN_F 356
#define EXP_F 357
#define ERROR 358

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "pasmpar.y" /* yacc.c:355  */

    double realit;
    int    intlit;
    int    opcode;
    int    ptype;
    int    preg;
    int    stdfunc;
    char*  label;
    int    index;
    char*  strlit;
    char   chrlit;

#line 383 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 400 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  119
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

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
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   199,   199,   226,   230,   236,   241,   246,   251,   256,
     268,   280,   290,   295,   300,   305,   310,   315,   320,   325,
     330,   335,   340,   350,   357,   364,   371,   378,   386,   393,
     400,   407,   414,   421,   429,   436,   443,   450,   457,   464,
     472,   479,   486,   493,   500,   508,   515,   522,   529,   536,
     543,   550,   557,   564,   572,   579,   587,   594,   601,   608,
     615,   623,   630,   637,   644,   651,   658,   666,   671,   676,
     681,   686,   691,   696,   701,   707,   717,   722,   727,   732,
     738,   749,   754,   759,   764,   769,   774,   779,   785,   794,
     802,   807,   812,   817,   822,   827,   832,   837,   842,   847,
     852,   857,   862,   867,   872,   878,   893,   898,   903,   908,
     913,   919,   928,   943,   955,   963,   971,   979
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LABEL", "DEFINE", "INTLIT", "REALIT",
  "STRLIT", "CHRLIT", "ID", "PCODEMNEMONIC", "CUP_O", "CSP_O", "ENT_O",
  "MST_O", "RTN_O", "EQU_O", "NEQ_O", "GRT_O", "GEQ_O", "LES_O", "LEQ_O",
  "ADI_O", "SBI_O", "NGI_O", "MPI_O", "DVI_O", "MOD_O", "ABI_O", "SQI_O",
  "INC_O", "DEC_O", "ADR_O", "SBR_O", "NGR_O", "MPR_O", "DVR_O", "ABR_O",
  "SQR_O", "IOR_O", "AND_O", "XOR_O", "NOT_O", "INN_O", "UNI_O", "INT_O",
  "DIF_O", "CMP_O", "SGS_O", "UJP_O", "XJP_O", "FJP_O", "TJP_O", "FLT_O",
  "FLO_O", "TRC_O", "RND_O", "CHR_O", "ORD_O", "STP_O", "LDA_O", "LDC_O",
  "LDI_O", "LVA_O", "LVB_O", "LVC_O", "LVI_O", "LVR_O", "LVS_O", "STI_O",
  "IXA_O", "PCODETYPE", "A_T", "B_T", "C_T", "I_T", "R_T", "S_T", "T_T",
  "P_T", "X_T", "PCODEREGISTER", "SP_R", "EP_R", "MP_R", "PC_R", "NP_R",
  "PCODEFUNCTION", "RDB_F", "RDC_F", "RDI_F", "RDR_F", "RLN_F", "WRB_F",
  "WRC_F", "WRI_F", "WRE_F", "WRF_F", "WRS_F", "WLN_F", "SQT_F", "LN_F",
  "EXP_F", "ERROR", "$accept", "program", "statement_list", "statement",
  "labeled_instruction", "label_list", "definition", "instruction",
  "op_only_instruction", "op_only_op", "type_instruction", "type_op",
  "type", "jump_instruction", "jump_op", "load_instruction", "load_op",
  "cup_instruction", "csp_instruction", "function", "ent_instruction",
  "register", "mst_instruction", "ldc_instruction", "ixa_instruction",
  "constant", YY_NULLPTR
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
     355,   356,   357,   358
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -81,     4,    68,    48,   -80,    69,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,    79,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,    70,   159,    -3,   -81,   -81,    65,   -81,   -81,
     -81,   -81,   -81,    79,   -81,   157,   -81,   156,   -81,   -81,
     -81,   -81,   -81,   -81,   158,   161,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   162,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,    64,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   163,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     0,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    23,    24,    25,    26,    27,    28,
      29,    30,    65,    66,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    76,    79,    78,    77,    48,    49,    50,    51,    52,
      53,    54,    81,     0,    63,    82,    83,    84,    85,    86,
      87,    64,     0,     0,     2,     3,     5,     0,     7,     6,
      12,    22,    13,     0,    14,     0,    15,     0,    17,    18,
      16,    19,    20,    21,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    89,   106,   107,   108,   109,   110,     0,   111,    68,
      69,    70,    71,    72,    73,    74,    67,     0,   113,     1,
       4,    10,     8,    55,    75,     0,    11,    88,   105,   114,
     115,   116,   117,   112,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   -81,    98,   -81,   -81,   -81,    99,   -81,   -81,
     -81,   -81,    94,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   117,    74,    75,    76,    77,    78,    79,   101,
      80,   107,    81,    82,    83,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       1,     2,   102,   103,   104,   105,   106,    84,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   121,   129,
     130,   131,   132,    85,   108,   118,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   109,   110,   111,   112,   113,   114,   115,   116,   119,
     124,   125,   120,   126,   127,   128,   122,   123,   134
};

static const yytype_uint8 yycheck[] =
{
       3,     4,    82,    83,    84,    85,    86,     3,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     3,     5,
       6,     7,     8,     5,     5,     5,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       3,     5,    64,     5,     3,     3,    67,    73,     5
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   117,   118,   119,   120,   121,   122,
     124,   126,   127,   128,     3,     5,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   123,    82,    83,    84,    85,    86,   125,     5,    72,
      73,    74,    75,    76,    77,    78,    79,   116,     5,     0,
     107,     3,   111,   116,     3,     5,     5,     3,     3,     5,
       6,     7,     8,   129,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   107,   108,   109,
     109,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   118,   118,   118,   118,
     119,   120,   120,   120,   120,   120,   120,   120,   121,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   125,   125,   125,   125,
     125,   126,   127,   128,   129,   129,   129,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     2,     3,     2,     1,     1,     1,     1
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
#line 200 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl << "program->statement-list";
                            F.t << endl ;
                            //SC.EightByteBoundary();
                            D.StoreSizes
                                (1024           //Stack size
                                ,IA.Size()      //P-Code instruction array size
                                ,IC.Size()      //Integer constants size
                                ,RC.Size()      //Real constants size
                                ,TC.Size()      //Set constants size
                                ,SC.Size()      //String constants size
                                );
                            D.Print(F.l);       //Print the directory
                            SC.Print(F.l);      //Print string constants
                            TC.Print(F.l);      //Print set constants
                            RC.Print(F.l);      //Print real constants
                            IC.Print(F.l);      //Print integer constants
                            IA.Print(F.l);      //Print the instruction array
                           // LT.Print(F.l);      //Print the label table
                            D.Write(F.e);       //Write the Directory
                            SC.Write(F.e);      //Write String Constants
                            TC.Write(F.e);      //Write Set Constants
                            RC.Write(F.e);      //Write Real Constants
                            IC.Write(F.e);      //Write Integer Constants
                            IA.Write(F.e);      //Write Instruction Array
                        }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 227 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl << "statement-list->statement";
                        }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 231 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "statement-list->statement-list statement";
                            F.t << endl ;
                        }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 237 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "statement->labeled-instruction";
                        }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 242 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "statement->instruction";
                        }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 247 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "statement->definition";
                        }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 252 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t<<endl ;
                            F.t<<"labeled-instruction-> label_list instruction";
                        }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 257 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t<<endl ;
                            F.t<<"label_list-> LABEL";
                            if (IA.IsEmpty()) { 
 //                              LT.Define($1,0,IA); 
			       F.t<<endl<< ((yyvsp[0].label)) << " " << 0;
                            } else {
  //                             LT.Define($1,IA.IC()-1,IA);
			       F.t<<endl<< ((yyvsp[0].label)) << " " << IA.IC()-1;
                            }
                        }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 269 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t<<endl ;
                            F.t<<"label_list-> label_list LABEL";
                            if (IA.IsEmpty()) { 
//                               LT.Define($2,0,IA); 
			       F.t<<endl<< ((yyvsp[0].label)) << " " << 0;
                            } else {
//                               LT.Define($2,IA.IC()-1,IA);
			       F.t<<endl<< ((yyvsp[0].label)) << " " << IA.IC()-1;
                            }
                        }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 281 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "definition->DEFINE LABEL INTLIT";
                            F.t << endl;
                            F.t << "Label=\"" << (yyvsp[-1].label) << "\"";
                            F.t << endl;
                            F.t << "INTLIT= " << (yyvsp[0].intlit);
//                            LT.Define($2,$3,IA);
                        }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 291 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->op-only-instruction";
                        }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 296 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->type-instruction";
                        }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 301 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->jump-instruction";
                        }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 306 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->load-instruction";
                        }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 311 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->ent-instruction";
                        }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 316 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->cup-instruction";
                        }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 321 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->csp-instruction";
                        }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 326 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->mst-instruction";
                        }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 331 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->ldc-instruction";
                        }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 336 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "instruction->ixa-instruction";
                        }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 341 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-instruction->op-only-op";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                            PasmInstruction I((yyvsp[0].opcode));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 351 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->ADI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 358 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->SBI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 365 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->NGI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 372 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->MPI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 379 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->DVI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 387 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->MOD";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 394 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->ABI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 401 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->SQI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 408 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->ADR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 415 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->SBR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 422 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->NGR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 430 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->MPR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 437 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->DVR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 444 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->ABR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 451 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->SQR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 458 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->IOR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 465 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->AND";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 473 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->XOR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 480 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->NOT";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 487 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->INN";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 494 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->UNI";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 501 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->NTR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 509 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->DIF";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 516 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->CMP";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 523 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->SGS";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 530 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->FLT";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 537 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->FLO";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 544 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->TRC";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 551 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->RND";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 558 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->CHR";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 565 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->ORD";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 573 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "op-only-op->STP";
                            F.t << endl;
                            F.t << "op-code=" << (int)(yyvsp[0].opcode);
                        }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 580 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-instruction->type-op type";
                            PasmInstruction I((yyvsp[-1].opcode),(yyvsp[0].ptype));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 588 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->RTN";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 595 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->EQU";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 602 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->NEQ";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 609 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->GRT";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 616 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->GEQ";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 624 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->LES";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 631 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->LEQ";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 638 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->LDI";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 645 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->STI";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 652 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->STI";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 659 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type-op->STI";
                            F.t << endl;
                            F.t << "type-op=" << (int)(yyvsp[0].opcode);
                        }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 667 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->P_T";
                        }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 672 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->A_T";
                        }
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 677 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->B_T";
                        }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 682 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->C_T";
                        }
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 687 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->I_T";
                        }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 692 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->R_T";
                        }
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 697 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->S_T";
                        }
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 702 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "type->T_T";
                        }
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 708 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "jump-instruction->jump-op LABEL";
                            PasmInstruction I((yyvsp[-1].opcode));
                            IA.Insert(I);
//                            LT.Reference($2,IA.IC()-1,IA);
                            I.Print(F.t);
                            F.t << " " << (yyvsp[0].label) << " " << IA.IC()-1;
                       }
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 718 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "jump-op->UJP"; 
                        }
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 723 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "jump-op->TJP"; 
                        }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 728 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "jump-op->FJP"; 
                        }
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 733 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "jump-op->XJP"; 
                        }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 739 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-instruction->load-op INTLIT INTLIT"; 
                            F.t << endl;
                            F.t << ((yyvsp[-2].opcode)) << " " << ((yyvsp[-1].intlit)) << " " << ((yyvsp[0].intlit)); 
                            F.t << endl;
                            PasmInstruction I((yyvsp[-2].opcode),(yyvsp[-1].intlit),(yyvsp[0].intlit));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 750 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LDA"; 
                        }
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 755 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LVA"; 
                        }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 760 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LVB"; 
                        }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 765 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LVC"; 
                        }
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 770 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LVI"; 
                        }
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 775 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LVR"; 
                        }
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 780 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "load-op->LVS"; 
                        }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 786 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "cup-instruction->CUP INTLIT LABEL"; 
                            PasmInstruction I((yyvsp[-2].opcode),(yyvsp[-1].intlit));
                            IA.Insert(I);
                         //   LT.Reference($3,IA.IC()-1,IA);
                            F.t << " " << (yyvsp[0].label);
                       }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 795 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "csp-instruction->CSP function"; 
                            PasmInstruction I((yyvsp[-1].opcode),0,(yyvsp[0].stdfunc));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 803 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->RDB"; 
                        }
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 808 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->RDC"; 
                        }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 813 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->RDI"; 
                        }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 818 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->RDR"; 
                        }
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 823 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->RLN"; 
                        }
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 828 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WRB"; 
                        }
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 833 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WRC"; 
                        }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 838 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WRI"; 
                        }
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 843 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WRE"; 
                        }
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 848 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WRF"; 
                        }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 853 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WRS"; 
                        }
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 858 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->WLN"; 
                        }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 863 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->SQT"; 
                        }
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 868 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->LN"; 
                        }
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 873 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "function->EXP"; 
                        }
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 879 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "ent-instruction->ENT register LABEL"; 
                            PasmInstruction I((yyvsp[-2].opcode),(yyvsp[-1].preg));
                            F.t << endl ;
                            F.t << "Before inserting instruction " << IA.IC();
                            IA.Insert(I);
                            F.t << endl ;
                            F.t << "After inserting instruction " << IA.IC();
                            F.t << endl ;
                          //  LT.Reference($3,IA.IC()-1,IA);
                            I.Print(F.t);
                           F.t << " " << (yyvsp[0].label) << " " << (IA.IC()-1);
                        }
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 894 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "register->SP_R"; 
                        }
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 899 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "register->EP_R"; 
                        }
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 904 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "register->MP_R"; 
                        }
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 909 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "register->PC_R"; 
                        }
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 914 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "register->NP_R"; 
                        }
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 920 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "mst-instruction->MST INTLIT"; 
                            PasmInstruction I((yyvsp[-1].opcode),(yyvsp[0].intlit));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 929 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "ldc-instruction->LDC type constant"; 
                            F.t << endl;
                            F.t << "$1=" << (yyvsp[-2].opcode);
                            F.t << ", ";
                            F.t << "$2=" << (yyvsp[-1].ptype);
                            F.t << ", ";
                            F.t << "$3=" << (yyvsp[0].index);
                            PasmInstruction I((yyvsp[-2].opcode),(yyvsp[-1].ptype),(yyvsp[0].index));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 944 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl;
                            F.t << "ixa-instruction->ixa stride";
                            F.t << "$1=" << (yyvsp[-1].opcode);
                            F.t << ", ";
                            F.t << "$2=" << (yyvsp[0].intlit);
                            PasmInstruction I((yyvsp[-1].opcode),0,(yyvsp[0].intlit));
                            IA.Insert(I);
                            I.Print(F.t);
                        }
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 956 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "constant->INTLIT"; 
                            F.t << setw(15) << dec << setfill(' ') << (yyvsp[0].intlit);
                            (yyval.index)=IC.Insert((yyvsp[0].intlit));
                        }
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 964 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "constant->REALIT"; 
                            F.t << scientific << setfill(' ') << setw(15) << (yyvsp[0].realit);
                            (yyval.index)=RC.Insert((yyvsp[0].realit));
                        }
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 972 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "constant->STRLIT"; 
                            F.t << setfill(' ') << setw(15) << "\"" << (yyvsp[0].strlit) << "\"";
                            (yyval.index)=SC.Insert((yyvsp[0].strlit));
                        }
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 980 "pasmpar.y" /* yacc.c:1646  */
    {
                            F.t << endl ;
                            F.t << "constant->CHRLIT"; 
                            F.t << setfill(' ') << setw(15) << "\'" << (yyvsp[0].chrlit) << "\'";
                            (yyval.index)=(yyvsp[0].chrlit);
                        }
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2842 "y.tab.c" /* yacc.c:1646  */
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
#line 986 "pasmpar.y" /* yacc.c:1906  */

//----------------------------------------------------------------------------
//Function yyerror is called when the parser, yyparse, finds a syntax error.
//----------------------------------------------------------------------------
void yyerror(const char* m) { F.t << endl << m; }
//----------------------------------------------------------------------------
//Constructor
//----------------------------------------------------------------------------
pasmpar::pasmpar(){ }
//----------------------------------------------------------------------------
//Function Parse parses the source file src.  Function parse creates the 
//Instruction Array that store P-Code instructions, the constant tables, 
//and the directory.
//----------------------------------------------------------------------------
void pasmpar::Parse(void)
{   
    pasmlabl S(F.s);             //Initialize the scanner to read from
                                    //file src
    yyparse();                      //Parse the P-Code Assembler Source
                                    //in file src
}
