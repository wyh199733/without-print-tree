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
#line 1 "syntax.y" /* yacc.c:339  */
 
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<stdarg.h>
	#include "lex.yy.c"
	#include "semantic.h"
	#include "intercode.h"
	#include "objectcode.h"
	struct sign* root;
	extern flexerror;
	extern semanticerror;
	int bisonerror=0;

#line 81 "syntax.tab.c" /* yacc.c:339  */

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
   by #include "syntax.tab.h".  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    INT = 258,
    FLOAT = 259,
    TYPE = 260,
    ID = 261,
    SEMI = 262,
    COMMA = 263,
    ASSIGNOP = 264,
    NOT = 265,
    PLUS = 266,
    MINUS = 267,
    STAR = 268,
    DIV = 269,
    RELOP = 270,
    AND = 271,
    OR = 272,
    DOT = 273,
    LP = 274,
    RP = 275,
    LB = 276,
    RB = 277,
    LC = 278,
    RC = 279,
    STRUCT = 280,
    RETURN = 281,
    IF = 282,
    ELSE = 283,
    WHILE = 284
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "syntax.y" /* yacc.c:355  */
struct sign* sign;

#line 154 "syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 171 "syntax.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    38,    42,    45,    50,    54,    59,    62,
      68,    71,    74,    81,    85,    88,    91,    95,    98,   104,
     110,   115,   120,   123,   127,   133,   137,   140,   144,   147,
     152,   159,   168,   175,   179,   182,   187,   190,   195,   198,
     204,   209,   214,   219,   224,   229,   234,   239,   244,   249,
     253,   257,   263,   268,   274,   279,   282,   285,   288,   293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "TYPE", "ID", "SEMI",
  "COMMA", "ASSIGNOP", "NOT", "PLUS", "MINUS", "STAR", "DIV", "RELOP",
  "AND", "OR", "DOT", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT",
  "RETURN", "IF", "ELSE", "WHILE", "$accept", "Program", "ExtDefList",
  "ExtDef", "ExtDecList", "Specifier", "StructSpecifier", "OptTag", "Tag",
  "VarDec", "FunDec", "VarList", "ParamDec", "CompSt", "StmtList", "Stmt",
  "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

#define YYPACT_NINF -89

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-89)))

#define YYTABLE_NINF -15

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -89,     0,     8,   -89,     7,    32,   -89,    -1,    17,
     -89,   -89,   -89,    26,   -89,    44,    -3,    29,     7,    39,
     -89,    49,    53,     7,   -89,    49,    37,     7,   -89,    49,
      46,    65,   -89,   -89,    50,    31,    27,    68,    69,   -89,
     -89,    60,   -89,     7,   -89,   -89,   -89,    77,    64,    64,
      64,    64,   109,   113,   -89,    92,    31,    73,    64,   -89,
      49,   -89,    59,   161,    28,   122,    86,    64,    64,   -89,
     -89,   -89,    64,    64,    64,    64,    64,    64,    64,    64,
     121,    64,   161,   -89,   -89,    97,    72,   -89,   -89,   135,
     148,   161,    28,    28,    28,    28,    28,    28,    28,   -89,
     108,    64,   -89,    31,    31,   -89,   -89,   117,   -89,    31,
     -89
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    10,    15,     0,     2,     4,     0,    11,    16,     0,
      13,     1,     3,    17,     6,     0,     8,     0,    34,     0,
       5,     0,     0,    34,     7,     0,     0,    34,    20,     0,
       0,    22,    17,     9,     0,    26,    38,     0,    36,    12,
      33,    23,    19,     0,    18,    56,    57,    55,     0,     0,
       0,     0,     0,     0,    28,     0,    26,     0,     0,    35,
       0,    21,     0,    50,    49,     0,     0,     0,     0,    24,
      25,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    37,    52,    59,     0,    48,    29,     0,
       0,    40,    44,    45,    46,    47,    43,    41,    42,    54,
       0,     0,    51,     0,     0,    53,    58,    30,    32,     0,
      31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   136,   -89,   133,     4,   -89,   -89,   -89,   -18,
     -89,   115,   -89,   150,   124,   -88,   -10,   -89,   111,   -89,
     -48,    80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    15,    25,     7,     9,    10,    16,
      17,    30,    31,    54,    55,    56,    26,    27,    37,    38,
      57,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      63,    64,    65,    66,     6,    21,     8,    36,    11,     6,
      82,    41,     1,    35,    85,   107,   108,    40,    22,    89,
      90,   110,   -14,    29,    91,    92,    93,    94,    95,    96,
      97,    98,     2,   100,    45,    46,    58,    47,    13,    14,
      18,    48,    36,    49,     1,    19,    80,    29,    22,    81,
      50,    20,    23,    85,    23,    32,    34,    51,    52,    28,
      53,    39,    45,    46,     2,    47,    42,    45,    46,    48,
      47,    49,    44,    43,    48,    59,    49,    60,    50,    84,
      71,    22,    72,    50,    73,    74,    75,    76,    77,    78,
      79,    80,   102,    88,    81,    72,    62,    73,    74,    75,
      76,    77,    78,    79,    80,   101,    72,    81,    73,    74,
      75,    76,    77,    78,    79,    80,    69,    72,    81,    73,
      74,    75,    76,    77,    78,    79,    80,    99,    67,    81,
     105,    72,    68,    73,    74,    75,    76,    77,    78,    79,
      80,    12,    87,    81,    72,   109,    73,    74,    75,    76,
      77,    78,    79,    80,    33,   103,    81,    72,    61,    73,
      74,    75,    76,    77,    78,    79,    80,    24,   104,    81,
      72,    83,    73,    74,    75,    76,    77,    78,    79,    80,
      70,   106,    81
};

static const yytype_uint8 yycheck[] =
{
      48,    49,    50,    51,     0,     8,     6,    25,     0,     5,
      58,    29,     5,    23,    62,   103,   104,    27,    21,    67,
      68,   109,    23,    19,    72,    73,    74,    75,    76,    77,
      78,    79,    25,    81,     3,     4,     9,     6,     6,     7,
      23,    10,    60,    12,     5,    19,    18,    43,    21,    21,
      19,     7,    23,   101,    23,     6,     3,    26,    27,    20,
      29,    24,     3,     4,    25,     6,    20,     3,     4,    10,
       6,    12,    22,     8,    10,     7,    12,     8,    19,    20,
       7,    21,     9,    19,    11,    12,    13,    14,    15,    16,
      17,    18,    20,     7,    21,     9,    19,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    21,    11,    12,
      13,    14,    15,    16,    17,    18,    24,     9,    21,    11,
      12,    13,    14,    15,    16,    17,    18,     6,    19,    21,
      22,     9,    19,    11,    12,    13,    14,    15,    16,    17,
      18,     5,    20,    21,     9,    28,    11,    12,    13,    14,
      15,    16,    17,    18,    21,    20,    21,     9,    43,    11,
      12,    13,    14,    15,    16,    17,    18,    17,    20,    21,
       9,    60,    11,    12,    13,    14,    15,    16,    17,    18,
      56,   101,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    25,    31,    32,    33,    35,    36,     6,    37,
      38,     0,    32,     6,     7,    34,    39,    40,    23,    19,
       7,     8,    21,    23,    43,    35,    46,    47,    20,    35,
      41,    42,     6,    34,     3,    46,    39,    48,    49,    24,
      46,    39,    20,     8,    22,     3,     4,     6,    10,    12,
      19,    26,    27,    29,    43,    44,    45,    50,     9,     7,
       8,    41,    19,    50,    50,    50,    50,    19,    19,    24,
      44,     7,     9,    11,    12,    13,    14,    15,    16,    17,
      18,    21,    50,    48,    20,    50,    51,    20,     7,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,     6,
      50,     8,    20,    20,    20,    22,    51,    45,    45,    28,
      45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    33,    34,    34,
      35,    35,    36,    36,    37,    37,    38,    39,    39,    40,
      40,    41,    41,    42,    43,    44,    44,    45,    45,    45,
      45,    45,    45,    46,    46,    47,    48,    48,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     1,     3,
       1,     1,     5,     2,     1,     0,     1,     1,     4,     4,
       3,     3,     1,     2,     4,     2,     0,     2,     1,     3,
       5,     7,     5,     2,     0,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     4,     3,     1,     1,     1,     3,     1
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
#line 31 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Program",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));
		if(!flexerror&&!bisonerror)print((yyval.sign));
		/*Program($$);
		if(semanticerror==0)*/
		translate_Program((yyval.sign));}
#line 1340 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDefList",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1349 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 42 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDefList",yylineno);
		(yyval.sign)->token=0;}
#line 1357 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 45 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDef",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1367 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDef",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1376 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDef",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1386 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDecList",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1394 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ExtDecList",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1404 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Specifier",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1412 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 71 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Specifier",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1420 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 74 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("StructSpecifier",(yyvsp[-4].sign)->line);
		links((yyval.sign),(yyvsp[-4].sign));
		brother((yyvsp[-4].sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1432 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 81 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("StructSpecifier",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1441 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 85 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("OptTag",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1449 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 88 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("OptTag",yylineno);
		(yyval.sign)->token=0;}
#line 1457 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Tag",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1465 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 95 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("VarDec",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1473 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("VarDec",(yyvsp[-3].sign)->line);
		links((yyval.sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1484 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 104 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("FunDec",(yyvsp[-3].sign)->line);
		links((yyval.sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1495 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 110 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("FunDec",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1505 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("VarList",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1515 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 120 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("VarList",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1523 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 123 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("ParamDec",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1532 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 127 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("CompSt",(yyvsp[-3].sign)->line);
		links((yyval.sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1543 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("StmtList",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1552 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("StmtList",yylineno);
		(yyval.sign)->token=0;}
#line 1560 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 140 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Stmt",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1569 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 144 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Stmt",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1577 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 147 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Stmt",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1587 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Stmt",(yyvsp[-4].sign)->line);
		links((yyval.sign),(yyvsp[-4].sign));
		brother((yyvsp[-4].sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1599 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 159 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Stmt",(yyvsp[-6].sign)->line);
		links((yyval.sign),(yyvsp[-6].sign));
		brother((yyvsp[-6].sign),(yyvsp[-5].sign));
		brother((yyvsp[-5].sign),(yyvsp[-4].sign));
		brother((yyvsp[-4].sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1613 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 168 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Stmt",(yyvsp[-4].sign)->line);
		links((yyval.sign),(yyvsp[-4].sign));
		brother((yyvsp[-4].sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1625 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 175 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("DefList",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1634 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 179 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("DefList",yylineno);
		(yyval.sign)->token=0;}
#line 1642 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 182 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Def",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1652 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 187 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("DecList",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1660 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 190 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("DecList",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1670 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 195 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Dec",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1678 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 198 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Dec",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1688 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 204 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1698 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 209 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1708 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 214 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1718 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1728 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 224 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1738 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 229 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1748 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 234 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1758 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 239 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1768 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 244 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1778 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 249 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1787 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 253 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-1].sign)->line);
		links((yyval.sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1796 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 257 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-3].sign)->line);
		links((yyval.sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1807 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 263 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1817 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 268 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-3].sign)->line);
		links((yyval.sign),(yyvsp[-3].sign));
		brother((yyvsp[-3].sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1828 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 274 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1838 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 279 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1846 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 282 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1854 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 285 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Exp",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1862 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 288 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Args",(yyvsp[-2].sign)->line);
		links((yyval.sign),(yyvsp[-2].sign));
		brother((yyvsp[-2].sign),(yyvsp[-1].sign));
		brother((yyvsp[-1].sign),(yyvsp[0].sign));}
#line 1872 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 293 "syntax.y" /* yacc.c:1646  */
    {
		(yyval.sign)=create_sign("Args",(yyvsp[0].sign)->line);
		links((yyval.sign),(yyvsp[0].sign));}
#line 1880 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 1884 "syntax.tab.c" /* yacc.c:1646  */
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
#line 296 "syntax.y" /* yacc.c:1906  */

yyerror(char* msg){
	fprintf(stderr,"Error type B at line %d:%s\n",yylineno,msg);
	bisonerror=1;
}
