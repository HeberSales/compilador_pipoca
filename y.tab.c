/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <vector>

#define YYSTYPE atributos

using namespace std;
using std::stoi;

int var_lace_qnt;
int var_cond_qnt;
int num_linha = 1;
int var_lace_name_qnt = 0;
int num_elementos_iniciados; 

string error = "";
string warning = "";
string linha_atual = "";
string declaracoes = "";
string funcoes = "";
string atributos_fun = "";
string cabecalho_fun = "";


typedef struct
{
	string nomeVariavel;
	string tipoVariavel;
	string tempVariavel;
	string strSize;
	string conteudo;
	string vetor;
	bool varDeFunc;
} TIPO_SIMBOLO;

struct atributos
{
	string label;
	string traducao;
	string tipo;
	string conteudo;
	string temp;
	bool temRetorno = false;
	TIPO_SIMBOLO varRetorno;
	string conteudoRetorno;
	string label_bool;
	bool isVector;
	string vetor;
	int sizeVector;
	int numElementos;
	string varAtributo;
};

typedef struct
{
	string nomeLaco;
	string tipoLaco;
	string fimLaco;
	string contexto;
}	TIPO_LOOP;

typedef struct
{
	int indice;
	string caracter;
} TABELA_ASCII;

typedef struct
{
	string nomeFunc;
	string tipo;
	string varRetorno;
	string conteudoRetorno;
} TIPO_FUNC;


vector<TIPO_SIMBOLO> tabelaVarFunc;
vector<TIPO_LOOP> tabelaLoop;
vector<vector<TIPO_SIMBOLO>> mapa;
vector<TIPO_FUNC> tabelaFunc;
int contextoGlobal;


string strGeralSize = "500";
int var_temp_qnt;
int num_jump;
vector<TIPO_SIMBOLO> global_escopo;
vector<TABELA_ASCII> table_ascii; 

string label_jump();
string gentempcode();

string genLacecode();
string genCondcode();
string genLaceNameCode();


void print_table();
bool buscaRetorno(string retorno);
bool buscaVariavel(string variavel);
void addSimbolo(string nome, string tipo, string temp);
void addVarFunc(string nome, string tipo, string temp);
void addStr(string nome, string tipo, string temp, string conteudo);
void addVector(string nome, string tipo, string temp, string vetor, string conteudo);
TIPO_SIMBOLO getSimbolo(string variavel);
TIPO_SIMBOLO getRetorno(string retorno);
string cast(string tipo1, string tipo2);
bool comparaTipo(string tipo1, string tipo2);
void inicializaAscii();
void print_var(TIPO_SIMBOLO);
void relacionalInvalida(string tipo1, string tipo2);
int getLength(string str);


void atualizarContexto(int num);
void contLinha();
void pushContexto();
void popContexto();
void pushLoop(string tipo);
TIPO_LOOP getLace(string nome);
TIPO_LOOP getLaceBreak();

void addFunc(string nome, string tipo);
TIPO_FUNC getFunc(string func);
bool buscaFunc(string func);

int yylex(void);
void yyerror(string);

#line 203 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    TK_NUM = 258,
    TK_REAL = 259,
    TK_CHAR = 260,
    TK_STRING = 261,
    TK_MAIN = 262,
    TK_ID = 263,
    TK_TIPO_INT = 264,
    TK_TIPO_FLOAT = 265,
    TK_TIPO_BOOL = 266,
    TK_TIPO_CHAR = 267,
    TK_TIPO_STRING = 268,
    TK_MAIOR_IGUAL = 269,
    TK_DOIS_PTS_IGUAL = 270,
    TK_MENOR_IGUAL = 271,
    TK_IGUAL_IGUAL = 272,
    TK_DIFERENTE = 273,
    TK_MAIS_MAIS = 274,
    TK_MENOS_MENOS = 275,
    TK_OU = 276,
    TK_E = 277,
    TK_FUNC = 278,
    TK_RETURN = 279,
    TK_TIPO_VOID = 280,
    TK_INCREMENT = 281,
    TK_FIM = 282,
    TK_ERROR = 283,
    TK_COMENTARIO = 284,
    TK_TRUE = 285,
    TK_FALSE = 286,
    TK_PRINTLN = 287,
    TK_PRINT = 288,
    TK_SCAN = 289,
    TK_IF = 290,
    TK_ELSE = 291,
    TK_ELSE_IF = 292,
    TK_WHILE = 293,
    TK_FOR = 294,
    TK_DO = 295,
    TK_BREAK = 296,
    TK_CONTINUE = 297,
    TK_POW = 298,
    TK_SQRT = 299
  };
#endif
/* Tokens.  */
#define TK_NUM 258
#define TK_REAL 259
#define TK_CHAR 260
#define TK_STRING 261
#define TK_MAIN 262
#define TK_ID 263
#define TK_TIPO_INT 264
#define TK_TIPO_FLOAT 265
#define TK_TIPO_BOOL 266
#define TK_TIPO_CHAR 267
#define TK_TIPO_STRING 268
#define TK_MAIOR_IGUAL 269
#define TK_DOIS_PTS_IGUAL 270
#define TK_MENOR_IGUAL 271
#define TK_IGUAL_IGUAL 272
#define TK_DIFERENTE 273
#define TK_MAIS_MAIS 274
#define TK_MENOS_MENOS 275
#define TK_OU 276
#define TK_E 277
#define TK_FUNC 278
#define TK_RETURN 279
#define TK_TIPO_VOID 280
#define TK_INCREMENT 281
#define TK_FIM 282
#define TK_ERROR 283
#define TK_COMENTARIO 284
#define TK_TRUE 285
#define TK_FALSE 286
#define TK_PRINTLN 287
#define TK_PRINT 288
#define TK_SCAN 289
#define TK_IF 290
#define TK_ELSE 291
#define TK_ELSE_IF 292
#define TK_WHILE 293
#define TK_FOR 294
#define TK_DO 295
#define TK_BREAK 296
#define TK_CONTINUE 297
#define TK_POW 298
#define TK_SQRT 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  80
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   933

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,    60,    64,     2,
      46,    47,    58,    45,    50,    54,     2,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    51,
      62,    55,    61,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   152,   152,   173,   178,   183,   191,   199,   209,   214,
     220,   226,   237,   242,   248,   284,   289,   297,   308,   307,
     331,   345,   351,   358,   381,   386,   391,   395,   401,   421,
     443,   473,   494,   516,   539,   549,   563,   572,   589,   599,
     609,   618,   627,   637,   648,   654,   660,   665,   671,   677,
     683,   693,   741,   848,   884,   894,   904,   914,   926,   934,
     947,   955,   961,   968,   970,   975,   980,   985,   990,   995,
    1000,  1005,  1010,  1015,  1020,  1025,  1030,  1035,  1040,  1046,
    1086,  1091,  1097,  1181,  1188,  1242,  1286,  1330,  1397,  1411,
    1418,  1425,  1467,  1507,  1546,  1585,  1624,  1634,  1643,  1652,
    1661,  1666,  1680,  1694,  1762,  1832,  1840,  1848,  1865,  1880,
    1885,  1891
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM", "TK_REAL", "TK_CHAR",
  "TK_STRING", "TK_MAIN", "TK_ID", "TK_TIPO_INT", "TK_TIPO_FLOAT",
  "TK_TIPO_BOOL", "TK_TIPO_CHAR", "TK_TIPO_STRING", "TK_MAIOR_IGUAL",
  "TK_DOIS_PTS_IGUAL", "TK_MENOR_IGUAL", "TK_IGUAL_IGUAL", "TK_DIFERENTE",
  "TK_MAIS_MAIS", "TK_MENOS_MENOS", "TK_OU", "TK_E", "TK_FUNC",
  "TK_RETURN", "TK_TIPO_VOID", "TK_INCREMENT", "TK_FIM", "TK_ERROR",
  "TK_COMENTARIO", "TK_TRUE", "TK_FALSE", "TK_PRINTLN", "TK_PRINT",
  "TK_SCAN", "TK_IF", "TK_ELSE", "TK_ELSE_IF", "TK_WHILE", "TK_FOR",
  "TK_DO", "TK_BREAK", "TK_CONTINUE", "TK_POW", "TK_SQRT", "'+'", "'('",
  "')'", "'{'", "'}'", "','", "';'", "'?'", "':'", "'-'", "'='", "'['",
  "']'", "'*'", "'/'", "'%'", "'>'", "'<'", "'!'", "'&'", "$accept", "S",
  "COMENTARIO", "BLOCO", "ATRIBUTOS", "ATRIBUTO", "FUNCOES",
  "DECLARA_FUNCAO", "CHAMA_FUNCAO", "RETORNO", "@1", "TERNARIO",
  "COMANDOS", "INICIALIZA_MULTI", "INICIALIZA", "TIPO", "DECLARA_VAR",
  "VETOR", "CONTROLE_LACO", "COMANDO", "POW", "SQRT", "E", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    43,    40,    41,   123,   125,
      44,    59,    63,    58,    45,    61,    91,    93,    42,    47,
      37,    62,    60,    33,    38
};
# endif

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-107)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     358,  -158,  -158,  -158,  -158,   538,   -19,   -18,  -158,  -158,
    -158,    57,  -158,   414,  -158,  -158,   -17,   -16,   -14,   488,
     488,   488,   -37,  -158,  -158,    -3,     0,   246,    22,     5,
     488,    41,     6,  -158,  -158,    11,     7,    12,    45,  -158,
      48,    20,    57,    24,   358,    25,    26,   599,   118,  -158,
    -158,   126,   432,   488,   488,  -158,  -158,    65,  -158,   488,
     488,    21,     4,   -19,   -18,   617,   617,   652,    46,    34,
     112,   475,   358,    -5,  -158,  -158,    29,    30,  -158,   810,
    -158,  -158,  -158,  -158,  -158,    44,    -6,  -158,  -158,  -158,
    -158,  -158,  -158,   488,   488,   488,   488,   488,   488,   488,
    -158,   414,   488,   488,   488,   488,   488,   488,  -158,    42,
    -158,    72,    70,    83,    28,  -158,  -158,   670,  -158,  -158,
     810,   719,   729,    80,   739,   788,   121,   432,   190,   358,
     488,   488,  -158,   -35,  -158,    86,   550,  -158,   800,    81,
    -158,   302,  -158,  -158,    87,   118,   118,   810,   810,   810,
     810,   810,   810,   519,    88,   810,   810,   810,   810,   810,
     810,   118,  -158,    57,  -158,  -158,  -158,    57,  -158,  -158,
      93,  -158,   -37,   488,  -158,  -158,   822,   871,  -158,   118,
    -158,  -158,   120,  -158,  -158,    97,   -37,  -158,  -158,   414,
    -158,  -158,   100,  -158,   358,   617,   488,   358,   103,   144,
    -158,  -158,  -158,   -37,  -158,   358,   617,  -158,  -158,   102,
    -158,  -158,   358,  -158,  -158
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      26,    36,    38,    40,    41,    54,    44,    45,    46,    47,
      48,     0,    49,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,     0,    26,     0,     0,
       0,     0,    65,    27,    25,    13,    71,    67,     0,   105,
       0,    69,     0,    73,    26,    75,    77,    64,    55,    89,
      90,     0,     0,     0,     0,    44,    45,     0,     3,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    26,     0,    37,    39,     0,     0,    60,    99,
       1,    66,    12,    72,    68,     0,    51,    70,    50,    74,
      24,    76,    78,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,    53,    34,
      16,     0,     8,     0,   106,   100,    56,    34,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,    26,    26,
       0,     0,    80,     0,    83,     0,    20,    22,    18,     0,
       4,     0,    58,    59,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    84,     0,    85,    86,    87,    88,    91,
      92,     0,    15,    10,    11,   108,   107,    10,   109,   110,
       0,   104,     0,     0,    28,    31,     0,     0,    81,     0,
      82,    17,     0,     6,     5,     0,     0,    57,    52,     0,
      35,     9,     0,   111,    26,     0,     0,    26,     0,     0,
       7,     2,    23,     0,    29,    26,     0,    32,    79,     0,
      14,    30,    26,    19,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   -15,  -157,  -158,   125,  -158,   -49,    82,
    -158,  -158,   -27,   -36,   -34,    -9,  -158,  -158,  -158,   -12,
     -48,   -47,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   111,   112,    34,    35,    36,    72,
     182,    37,    38,   108,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    58,    57,   115,   118,   119,   191,    68,    76,   145,
     192,    27,   178,    77,   109,   179,   116,    90,   117,    71,
      65,    66,    67,    49,    50,    74,    75,    53,    54,    59,
      60,    79,    61,    88,    11,   133,   135,     1,     2,     3,
       4,    80,   113,    69,   140,   139,    70,    49,    50,   146,
     128,   129,    85,   120,   121,   122,    86,    81,    83,   127,
     124,   125,    78,    84,    14,    15,    55,    56,     8,     9,
      10,    87,   138,   123,    51,    89,    91,    92,   115,   118,
     119,   132,    12,   127,   131,   126,   142,   143,    28,   154,
     144,   164,   161,   171,   147,   148,   149,   150,   151,   152,
     153,   174,   175,   155,   156,   157,   158,   159,   160,   187,
     188,   109,   109,    29,   185,     1,     2,     3,     4,   162,
     163,     1,     2,     3,     4,   190,   167,   109,   120,   170,
     183,   176,   177,   180,   186,    55,    56,     8,     9,    10,
     193,   189,    14,    15,   199,   198,   200,   203,    14,    15,
     208,    12,   209,   213,   113,   141,     0,   194,   113,   134,
      82,     0,     0,     0,     0,     0,    28,   204,     0,     0,
     207,   201,    28,   110,   195,     0,     0,   202,   211,     0,
     205,     0,    29,     0,     0,   214,     0,     0,   210,     0,
       0,   212,     0,     1,     2,     3,     4,   206,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,    12,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,   172,   173,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,    29,     0,     0,     1,
       2,     3,     4,    30,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      71,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    29,     0,     0,     1,     2,     3,     4,    30,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
      27,   184,     0,     0,     0,     0,    28,     0,    29,     0,
       0,     1,     2,     3,     4,    30,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,    12,     0,     0,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     1,     2,     3,
       4,    30,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,    12,
     114,    63,    64,    13,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,    14,    15,    16,    17,    18,     0,    28,     0,
      29,     0,     0,     0,     0,    25,    26,    30,     1,     2,
       3,     4,     0,   136,    63,    64,    28,     0,     0,     0,
       0,     1,     2,     3,     4,    30,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    14,    15,    16,    17,    18,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      16,    17,    18,     0,     0,     0,   137,     0,     0,    28,
       0,     0,     0,    93,     0,    94,    95,    96,    30,     0,
      97,    98,    28,     0,     0,     0,     0,     0,     0,     0,
       0,    30,  -106,    48,  -106,  -106,  -106,    49,    50,  -106,
    -106,     0,     0,     0,  -106,     0,  -106,  -106,  -106,    49,
      50,  -106,  -106,   102,  -106,     0,     0,   103,   104,   105,
     106,   107,     0,  -106,    51,     0,     0,     0,     0,     0,
    -106,     0,     0,    52,     0,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,     0,     0,     0,   127,     0,     0,  -106,  -106,
    -106,  -106,  -106,    93,     0,    94,    95,    96,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    94,    95,    96,     0,     0,    97,    98,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,     0,   102,     0,     0,     0,   103,   104,   105,
     106,   107,    99,     0,     0,    27,    93,     0,    94,    95,
      96,   102,     0,    97,    98,   103,   104,   105,   106,   107,
       0,     0,     0,     0,  -104,     0,  -104,  -104,  -104,     0,
       0,  -104,  -104,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,   130,     0,     0,   102,     0,     0,     0,
     103,   104,   105,   106,   107,  -104,     0,     0,     0,     0,
     161,     0,  -104,     0,     0,     0,     0,     0,  -104,  -104,
    -104,  -104,  -104,    93,     0,    94,    95,    96,     0,     0,
      97,    98,     0,    93,     0,    94,    95,    96,     0,     0,
      97,    98,     0,    93,     0,    94,    95,    96,     0,     0,
      97,    98,     0,     0,    99,     0,   165,     0,     0,     0,
       0,     0,     0,   102,    99,     0,   166,   103,   104,   105,
     106,   107,     0,   102,    99,     0,   168,   103,   104,   105,
     106,   107,     0,   102,     0,     0,     0,   103,   104,   105,
     106,   107,    93,     0,    94,    95,    96,     0,     0,    97,
      98,     0,     0,     0,    93,     0,    94,    95,    96,     0,
       0,    97,    98,     0,    93,     0,    94,    95,    96,     0,
       0,    97,    98,    99,     0,   169,    93,     0,    94,    95,
      96,     0,   102,    97,    98,    99,   103,   104,   105,   106,
     107,   181,     0,     0,   102,    99,     0,     0,   103,   104,
     105,   106,   107,     0,   102,     0,     0,    99,   103,   104,
     105,   106,   107,   196,     0,     0,   102,     0,     0,     0,
     103,   104,   105,   106,   107,    93,     0,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   197,     0,     0,   102,     0,     0,     0,   103,
     104,   105,   106,   107
};

static const yytype_int16 yycheck[] =
{
      27,    13,    11,    52,    52,    52,   163,    22,     3,    15,
     167,    48,    47,     8,    48,    50,    52,    44,    52,    24,
      19,    20,    21,    19,    20,     3,     4,    46,    46,    46,
      46,    30,    46,    42,    23,    69,    70,     3,     4,     5,
       6,     0,    51,    46,    49,    72,    46,    19,    20,    55,
      65,    66,     7,    52,    53,    54,     8,    51,    51,    55,
      59,    60,    57,    51,    30,    31,     9,    10,    11,    12,
      13,    51,    71,     8,    46,    51,    51,    51,   127,   127,
     127,    47,    25,    55,    38,    64,    57,    57,    54,   101,
      46,     8,    50,   127,    93,    94,    95,    96,    97,    98,
      99,   128,   129,   102,   103,   104,   105,   106,   107,   145,
     146,   145,   146,    56,   141,     3,     4,     5,     6,    47,
      50,     3,     4,     5,     6,   161,    46,   161,   127,     8,
      49,   130,   131,    47,    47,     9,    10,    11,    12,    13,
      47,    53,    30,    31,    24,   179,    49,    47,    30,    31,
      47,    25,     8,    51,   163,    73,    -1,   172,   167,    47,
      35,    -1,    -1,    -1,    -1,    -1,    54,   194,    -1,    -1,
     197,   186,    54,    47,   173,    -1,    -1,   189,   205,    -1,
     195,    -1,    56,    -1,    -1,   212,    -1,    -1,   203,    -1,
      -1,   206,    -1,     3,     4,     5,     6,   196,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,     3,
       4,     5,     6,    63,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,     3,     4,     5,     6,    63,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,
      -1,     3,     4,     5,     6,    63,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,     3,     4,     5,
       6,    63,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    25,
       8,     9,    10,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    43,    44,    63,     3,     4,
       5,     6,    -1,     8,     9,    10,    54,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    63,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    -1,    14,    -1,    16,    17,    18,    63,    -1,
      21,    22,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    54,    24,    -1,    -1,    58,    59,    60,
      61,    62,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    45,    58,    59,    60,    61,
      62,    51,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    61,    62,    14,    -1,    16,    17,    18,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    16,    17,    18,    -1,    -1,    21,    22,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    45,    -1,    -1,    48,    14,    -1,    16,    17,
      18,    54,    -1,    21,    22,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    14,    -1,    16,    17,    18,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    45,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    14,    -1,    16,    17,    18,    -1,    -1,
      21,    22,    -1,    14,    -1,    16,    17,    18,    -1,    -1,
      21,    22,    -1,    14,    -1,    16,    17,    18,    -1,    -1,
      21,    22,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    45,    -1,    47,    58,    59,    60,
      61,    62,    -1,    54,    45,    -1,    47,    58,    59,    60,
      61,    62,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    14,    -1,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    -1,    14,    -1,    16,    17,    18,    -1,
      -1,    21,    22,    -1,    14,    -1,    16,    17,    18,    -1,
      -1,    21,    22,    45,    -1,    47,    14,    -1,    16,    17,
      18,    -1,    54,    21,    22,    45,    58,    59,    60,    61,
      62,    51,    -1,    -1,    54,    45,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    54,    -1,    -1,    45,    58,    59,
      60,    61,    62,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    14,    -1,    16,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    23,    25,    29,    30,    31,    32,    33,    34,    35,
      38,    39,    40,    41,    42,    43,    44,    48,    54,    56,
      63,    66,    67,    68,    71,    72,    73,    76,    77,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    15,    19,
      20,    46,    55,    46,    46,     9,    10,    80,    84,    46,
      46,    46,     8,     9,    10,    87,    87,    87,    68,    46,
      46,    24,    74,    77,     3,     4,     3,     8,    57,    87,
       0,    51,    71,    51,    51,     7,     8,    51,    80,    51,
      77,    51,    51,    14,    16,    17,    18,    21,    22,    45,
      51,    52,    54,    58,    59,    60,    61,    62,    78,    79,
      47,    69,    70,    80,     8,    73,    78,    79,    85,    86,
      87,    87,    87,     8,    87,    87,    64,    55,    68,    68,
      51,    38,    47,    79,    47,    79,     8,    51,    87,    77,
      49,    74,    57,    57,    46,    15,    55,    87,    87,    87,
      87,    87,    87,    87,    84,    87,    87,    87,    87,    87,
      87,    50,    47,    50,     8,    47,    47,    46,    47,    47,
       8,    79,    36,    37,    77,    77,    87,    87,    47,    50,
      47,    51,    75,    49,    49,    77,    47,    78,    78,    53,
      78,    69,    69,    47,    68,    87,    51,    51,    79,    24,
      49,    68,    84,    47,    77,    68,    87,    77,    47,     8,
      68,    77,    68,    51,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    68,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    72,    73,    73,    74,    75,    74,
      74,    74,    74,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     3,     4,     4,     5,     1,     3,
       0,     2,     2,     1,     7,     4,     3,     3,     0,     6,
       2,     1,     2,     5,     2,     1,     0,     1,     4,     6,
       7,     4,     6,     8,     1,     3,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     3,     1,     2,     3,     4,     3,     3,
       2,     1,     1,     2,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     6,
       3,     4,     4,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     1,     1,     4,     4,     4,
       4,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 153 "sintatico.y"
                        {
				if (error == ""){
					cout << "\n\n/*Compilador Pipoca*/\n" << "#include <iostream>\n#include<string.h>\n#include<stdio.h>\n#include<cstring>\n\n";
					
					cout << atributos_fun << endl;

					cout << cabecalho_fun << endl;

					cout << "\nint main(void)\n{\n" <<endl;
					
					cout << declaracoes;

					cout << "\n" + yyvsp[-4].traducao + yyvsp[0].traducao << "\treturn 0;\n}\n\n";

					cout << funcoes << endl;
				}
				else yyerror(error);  
			}
#line 1826 "y.tab.c"
    break;

  case 3:
#line 174 "sintatico.y"
                        {
				yyval.traducao = "//" + yyvsp[0].traducao; 
			}
#line 1834 "y.tab.c"
    break;

  case 4:
#line 179 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 1842 "y.tab.c"
    break;

  case 5:
#line 184 "sintatico.y"
                        {
				yyval.tipo = yyvsp[-1].tipo;
				yyval.temRetorno = true;
				yyval.traducao = yyvsp[-2].traducao + yyvsp[-1].traducao;
				yyval.varRetorno = yyvsp[-1].varRetorno;
			}
#line 1853 "y.tab.c"
    break;

  case 6:
#line 192 "sintatico.y"
                        {
				yyval.tipo = yyvsp[-2].tipo;
				yyval.temRetorno = true;
				yyval.traducao = yyvsp[-2].traducao + yyvsp[-1].traducao;
				yyval.varRetorno = yyvsp[-2].varRetorno;
			}
#line 1864 "y.tab.c"
    break;

  case 7:
#line 200 "sintatico.y"
                        {
				yyval.tipo = yyvsp[-2].tipo;
				yyval.temRetorno = true;
				yyval.traducao = yyvsp[-4].traducao + yyvsp[-3].traducao + yyvsp[-2].traducao;
				yyval.varRetorno = yyvsp[-2].varRetorno;
			}
#line 1875 "y.tab.c"
    break;

  case 8:
#line 210 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 1883 "y.tab.c"
    break;

  case 9:
#line 215 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-2].traducao + ", " + yyvsp[0].traducao;
			}
#line 1891 "y.tab.c"
    break;

  case 10:
#line 220 "sintatico.y"
                        {

			}
#line 1899 "y.tab.c"
    break;

  case 11:
#line 227 "sintatico.y"
                        {	
				string temp = gentempcode();
				addVarFunc(yyvsp[0].label, yyvsp[-1].tipo, temp);

				yyval.varAtributo = temp;
				yyval.traducao = yyvsp[-1].tipo + " " + temp;
				atributos_fun += yyval.traducao + "; //atributo '" + yyvsp[0].label + "'\n";
			}
#line 1912 "y.tab.c"
    break;

  case 12:
#line 238 "sintatico.y"
                        {	
			
			}
#line 1920 "y.tab.c"
    break;

  case 13:
#line 243 "sintatico.y"
                        {

			}
#line 1928 "y.tab.c"
    break;

  case 14:
#line 249 "sintatico.y"
                                {
					TIPO_SIMBOLO retorno = yyvsp[0].varRetorno;
					bool encontrei = buscaFunc(yyvsp[-4].label);
					
					if(encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Função (" + yyvsp[-4].label + ") Já declarada" + "\n";


					if (!yyvsp[0].temRetorno && (yyvsp[-5].tipo != "void")){
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Retorno da função (" + yyvsp[-4].label + ") não expecificado.\n";
					}

					else if(yyvsp[0].temRetorno && yyvsp[-5].tipo == "void"){
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A função (" + yyvsp[-5].tipo + " " + yyvsp[-4].label + ") não deve ter retorno\n";
					}
				
					else if (yyvsp[-5].tipo == retorno.tipoVariavel){
						addFunc(yyvsp[-4].label, yyvsp[-5].tipo);
					
						funcoes += yyvsp[-5].tipo + " " + yyvsp[-4].label + "(" + yyvsp[-2].traducao + ")\n" + "{\n" + yyvsp[0].traducao + "\treturn " + retorno.tempVariavel + "\n}\n\n";
						cabecalho_fun += yyvsp[-5].tipo + " " + yyvsp[-4].label + "(" + yyvsp[-2].traducao + ");\n";
					}

					else if (yyvsp[-5].tipo == "void" && !yyvsp[0].temRetorno){
						addFunc(yyvsp[-4].label, yyvsp[-5].tipo);
					
						funcoes += yyvsp[-5].tipo + " " + yyvsp[-4].label + "(" + yyvsp[-2].traducao + ")\n" + "{\n" + yyvsp[0].traducao + "\n}\n\n";
						cabecalho_fun += yyvsp[-5].tipo + " " + yyvsp[-4].label + "(" + yyvsp[-2].traducao + ");\n";
					}

					else {
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A função (" + yyvsp[-5].tipo + " " + yyvsp[-4].label + ") Não pode retornar um " + retorno.tipoVariavel + ".\n";
					}
				}
#line 1966 "y.tab.c"
    break;

  case 15:
#line 285 "sintatico.y"
                                {
					cout << "BUSCA Func Chamada\n";
				}
#line 1974 "y.tab.c"
    break;

  case 16:
#line 290 "sintatico.y"
                                {
					TIPO_FUNC fun = getFunc(yyvsp[-2].label);

					yyval.traducao = "\t" + fun.nomeFunc + "();\n";
				}
#line 1984 "y.tab.c"
    break;

  case 17:
#line 298 "sintatico.y"
                        {
				TIPO_SIMBOLO var_retorno = getSimbolo(yyvsp[-1].label);
				yyval.tipo = yyvsp[-1].tipo;
				yyval.temRetorno = true;
				yyval.label = "return";
				yyval.varRetorno = var_retorno;
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 1997 "y.tab.c"
    break;

  case 18:
#line 308 "sintatico.y"
                        {
				TIPO_SIMBOLO var_retorno = getSimbolo(yyvsp[0].label);
				yyval.tipo = yyvsp[0].tipo;
				yyval.temRetorno = true;
				yyval.label = "return";
				yyval.varRetorno = var_retorno;
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2010 "y.tab.c"
    break;

  case 19:
#line 318 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-4].label);
				if (!encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[-4].label + ") Não declarada.\n";

				else {
					TIPO_SIMBOLO var_retorno = getSimbolo(yyvsp[-4].label);
					yyval.tipo = yyvsp[-4].tipo;
					yyval.temRetorno = true;
					yyval.label = "return";
					yyval.varRetorno = var_retorno;
				}
			}
#line 2027 "y.tab.c"
    break;

  case 20:
#line 332 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[0].label);
				if (!encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[0].label + "Não declarada.\n";

				else{
					TIPO_SIMBOLO var_retorno = getSimbolo(yyvsp[0].label);
					yyval.tipo = yyvsp[0].tipo;
					yyval.temRetorno = true;
					yyval.label = "return";
					yyval.varRetorno = var_retorno;
				}
			}
#line 2044 "y.tab.c"
    break;

  case 21:
#line 346 "sintatico.y"
                        {
				yyval.temRetorno = false;
				error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Falta uma expressão após o comando (return)\n";
			}
#line 2053 "y.tab.c"
    break;

  case 22:
#line 352 "sintatico.y"
                        {
				yyval.temRetorno = false;
				error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Falta uma expressão após o comando (return)\n";
			}
#line 2062 "y.tab.c"
    break;

  case 23:
#line 359 "sintatico.y"
                        {
				if(yyvsp[-4].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";

				else{
					string temp = gentempcode();
					yyval.label = temp;
					addSimbolo(temp, "bool", temp);
					string jump = label_jump();
					
					addSimbolo(temp, "bool", temp);
					string condicao = temp + " = !" + yyvsp[-4].label;

					yyval.traducao = yyvsp[-4].traducao + "\t" + condicao + ";\n INICIO_TERNARIO:\n" +
					"\n\tif (" + temp + ") goto CONDICAO_2_" + jump + ";\n" +
					yyvsp[-2].traducao + "\tgoto FIM_TERNARIO_" + jump + ";\n" +
					"CONDICAO_2_" + jump + ":\n\n" +
					yyvsp[0].traducao + "\nFIM_TERNARIO_" + jump + ":\n\n";
				}
			}
#line 2086 "y.tab.c"
    break;

  case 24:
#line 382 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao + yyvsp[0].traducao;
			}
#line 2094 "y.tab.c"
    break;

  case 25:
#line 386 "sintatico.y"
                                 {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2102 "y.tab.c"
    break;

  case 26:
#line 391 "sintatico.y"
                        {
				yyval.traducao = "";
			}
#line 2110 "y.tab.c"
    break;

  case 27:
#line 396 "sintatico.y"
                        {
				yyval.temRetorno = yyvsp[0].temRetorno;
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2119 "y.tab.c"
    break;

  case 28:
#line 402 "sintatico.y"
                        {				
				if(yyvsp[-2].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";

				else{
					string temp = gentempcode();
					yyval.label = temp;
					addSimbolo(temp, "bool", temp);
					string jump = label_jump();
					
					addSimbolo(temp, "bool", temp);
					string condicao = temp + " = !" + yyvsp[-2].label;

					yyval.traducao = yyvsp[-2].traducao + "\t" + condicao + ";\n" +
					"\n\tif (" + temp + ") goto FIM_IF_" + jump + ";\n" +
					yyvsp[-1].traducao +
					"\tFIM_IF_" + jump + ":\n\n" +
					yyvsp[0].traducao;
				}
			}
#line 2143 "y.tab.c"
    break;

  case 29:
#line 422 "sintatico.y"
                        {
				if(yyvsp[-4].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";
				string temp = gentempcode();

				string jump1 = label_jump();
				string jump2 = label_jump();
				
				addSimbolo(temp, "bool", temp);
				string condicao = temp + " = !" + yyvsp[-4].label;

				yyval.traducao = yyvsp[-4].traducao + "\t" + condicao + ";\n" +
				"\n\tif (" + temp + ") goto FIM_IF_" + jump1 + "\n;" +
			 	yyvsp[-3].traducao +
				"\tgoto FIM_ELSE_" + jump2 + ";\n" +
				"FIM_IF_" + jump1 + ":\n" +
				"INICIO_ELSE_" + jump2 + ":\n" +
				yyvsp[-1].traducao +
				"FIM_ELSE_" + jump2 + ":\n\n" + yyvsp[0].traducao;

			}
#line 2168 "y.tab.c"
    break;

  case 30:
#line 444 "sintatico.y"
                        {
				if(yyvsp[-5].tipo != "bool" || yyvsp[-2].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";
				
				else{
					string temp = gentempcode();
					string jump1 = label_jump();
					string jump2 = label_jump();
					
					addSimbolo(temp, "bool", temp);
					string condicao = temp + " = !" + yyvsp[-5].label;

					string temp2 = gentempcode();
					addSimbolo(temp2, "bool", temp2);
					string condicao2 = temp2 + " = !" + yyvsp[-2].label;

					yyval.traducao = yyvsp[-5].traducao + "\t" + condicao + ";\n" +
					"\n\tif (" + temp + ") goto FIM_IF_" + jump1 + "\n;" +
					yyvsp[-4].traducao +
					"\nFIM_IF_" + jump1 + ":\n" +
					"INICIO_ELSE_IF_" + jump2 + ":\n" +
					yyvsp[-2].traducao + "\t" + condicao2 + ";\n" +
					"\n\tif (" + temp2 + ") goto FIM_ELSE_IF_" + jump2 + ";"
					"\n\t{\n" +
					yyvsp[-1].traducao +
					"\t}\n" +
					"FIM_ELSE_IF_" + jump2 + ":\n\n" + yyvsp[0].traducao;
				}
			}
#line 2201 "y.tab.c"
    break;

  case 31:
#line 474 "sintatico.y"
                        {
				if(yyvsp[-2].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";

				else{
					string temp = gentempcode();
					yyval.label = temp;
					addSimbolo(temp, "bool", temp);
					string lace = genLacecode();
					TIPO_LOOP loop = getLace(yyvsp[-3].label);	
					
					string condicao = temp + " = !" + yyvsp[-2].label;

					yyval.traducao = loop.nomeLaco + ":\n" + lace + ":\n" + yyvsp[-2].traducao + "\t" + condicao + ";\n" +
					"\n\tif (" + temp + ") goto " + loop.fimLaco + ";\n" +
					yyvsp[-1].traducao +
					"\tgoto " + lace + ";\n" +
					loop.fimLaco + ":\n\n" + yyvsp[0].traducao;
				}
			}
#line 2225 "y.tab.c"
    break;

  case 32:
#line 495 "sintatico.y"
                        {
				if(yyvsp[-2].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";
				
				else{
					string temp = gentempcode();
					yyval.label = temp;
					addSimbolo(temp, "bool", temp);
					string lace = genLacecode();
					TIPO_LOOP loop = getLace(yyvsp[-5].label);	
					
					string condicao = temp + " = !" + yyvsp[-2].label;

					yyval.traducao = lace + ":\n" +  
					yyvsp[-2].traducao + yyvsp[-4].traducao + "\t" + condicao + ";\n" +
					yyvsp[-3].traducao + loop.nomeLaco + ":\n" +
					"\n\tif (" + temp + ") goto " + loop.fimLaco + ";\n" +
					"\tgoto " + lace + ";\n" +
					loop.fimLaco + ":\n\n" + yyvsp[0].traducao;
				}
			}
#line 2250 "y.tab.c"
    break;

  case 33:
#line 517 "sintatico.y"
                        {
				if(yyvsp[-4].tipo != "bool") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O condicinal do loop deve ser um boolean\n";

				else{	
					string temp = gentempcode();
					string jump = label_jump();
					
					addSimbolo(temp, "bool", temp);
					string lace = genLacecode();
					TIPO_LOOP loop = getLace(yyvsp[-7].label);
					string condicao = temp + " =! " + yyvsp[-4].label;

					yyval.traducao = yyvsp[-6].traducao + "INICIO_FOR_" + jump + ":\n" + lace + ":\n" +
					yyvsp[-4].traducao + "\t" + condicao + ";\n" +
					"\n\tif (" + temp + ") goto " + loop.fimLaco + ";\n" +
					yyvsp[-1].traducao + loop.nomeLaco + ":\n" + yyvsp[-2].traducao +
					"\tgoto " + lace + ";\n" +
					"FIM_FOR_" + jump + ":\n" + loop.fimLaco + ":\n" + yyvsp[0].traducao;
				}
			}
#line 2275 "y.tab.c"
    break;

  case 34:
#line 540 "sintatico.y"
                                        {
						num_elementos_iniciados++;
						yyval.numElementos++;
						yyval.label = yyvsp[0].label;
						yyval.tipo = yyvsp[0].tipo;
						yyval.conteudo = yyvsp[0].conteudo;
						yyval.traducao = yyvsp[0].traducao;
					}
#line 2288 "y.tab.c"
    break;

  case 35:
#line 550 "sintatico.y"
                                        {
						num_elementos_iniciados++;
						int tam = yyvsp[-2].numElementos + yyvsp[0].numElementos;
						if (yyvsp[-2].tipo != yyvsp[0].tipo) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Um vetor não pode receber tipos diferentes\n";

						else{
							yyval.tipo = yyvsp[-2].tipo;
							
							yyval.conteudo = yyvsp[-2].conteudo + ", " + yyvsp[0].conteudo;
							yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao;
						}
					}
#line 2305 "y.tab.c"
    break;

  case 36:
#line 564 "sintatico.y"
                        {
				yyval.tipo = "int";
				yyval.conteudo = yyvsp[0].label;
				yyval.label = gentempcode();
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				yyval.traducao = "\t" + yyval.label + " = " + yyvsp[0].label + ";\n";
			}
#line 2317 "y.tab.c"
    break;

  case 37:
#line 573 "sintatico.y"
                        {
				yyval.tipo = "int";
				yyval.conteudo = yyvsp[0].label;
				yyval.label = gentempcode();
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				yyval.traducao = "\t" + yyval.label + " = -" + yyvsp[0].label + ";\n";
			}
#line 2329 "y.tab.c"
    break;

  case 38:
#line 590 "sintatico.y"
                        {
				yyval.tipo = "float";
				yyval.conteudo = yyvsp[0].label;
				yyval.label = gentempcode();
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				yyval.traducao = "\t" + yyval.label + " = " + yyvsp[0].label + ";\n";
			
			}
#line 2342 "y.tab.c"
    break;

  case 39:
#line 600 "sintatico.y"
                        {
				yyval.tipo = "float";
				yyval.conteudo = yyvsp[0].label;
				yyval.label = gentempcode();
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				yyval.traducao = "\t" + yyval.label + " = -" + yyvsp[0].label + ";\n";
			
			}
#line 2355 "y.tab.c"
    break;

  case 40:
#line 610 "sintatico.y"
                        {
				yyval.tipo = "char";
				yyval.conteudo = yyvsp[0].label;
				yyval.label = gentempcode();
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				yyval.traducao = "\t" + yyval.label + " = " + yyvsp[0].label + ";\n";
			}
#line 2367 "y.tab.c"
    break;

  case 41:
#line 619 "sintatico.y"
                        {
				yyval.tipo = "string";
				yyval.conteudo = yyval.label;
				yyval.label = gentempcode();
				addStr(yyval.label, yyval.tipo, yyval.label, yyval.conteudo);
				yyval.traducao = "\tstrcpy(" + yyval.label + ", " + yyvsp[0].label + ");\t//"+ yyval.label +"\n";	
			}
#line 2379 "y.tab.c"
    break;

  case 42:
#line 628 "sintatico.y"
                        {
				yyval.tipo = "bool";
				yyval.conteudo = "1";
				yyval.label_bool = "True";
				yyval.label = gentempcode();
				yyval.traducao = "\t" + yyval.label + " = " + yyval.conteudo + ";\n";
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
			}
#line 2392 "y.tab.c"
    break;

  case 43:
#line 638 "sintatico.y"
                        {
				yyval.tipo = "bool";
				yyval.conteudo = "0";
				yyval.label_bool = "False";
				yyval.label = gentempcode();
				yyval.traducao = "\t" + yyval.label + " = " + yyval.conteudo + ";\n";
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
			}
#line 2405 "y.tab.c"
    break;

  case 44:
#line 649 "sintatico.y"
                        {
				yyval.tipo = "int";
				yyval.traducao = "int";
			}
#line 2414 "y.tab.c"
    break;

  case 45:
#line 655 "sintatico.y"
                        {
				yyval.tipo = "float";
				yyval.traducao = "float";
			}
#line 2423 "y.tab.c"
    break;

  case 46:
#line 661 "sintatico.y"
                        {
				yyval.tipo = "bool";
			}
#line 2431 "y.tab.c"
    break;

  case 47:
#line 666 "sintatico.y"
                        {
				yyval.tipo = "char";
				yyval.traducao = "char";
			}
#line 2440 "y.tab.c"
    break;

  case 48:
#line 672 "sintatico.y"
                        {
				yyval.tipo = "string";
				yyval.traducao = "string";
			}
#line 2449 "y.tab.c"
    break;

  case 49:
#line 678 "sintatico.y"
                        {
				yyval.tipo = "void";
				yyval.traducao = "void";
			}
#line 2458 "y.tab.c"
    break;

  case 50:
#line 684 "sintatico.y"
                        {
				yyval.sizeVector = yyvsp[-1].sizeVector;
				yyval.tipo = yyvsp[0].tipo;
				yyval.isVector = true;
				yyval.vetor = yyvsp[-1].traducao;
				yyval.traducao = yyvsp[-1].traducao + yyvsp[0].traducao;
			}
#line 2470 "y.tab.c"
    break;

  case 51:
#line 694 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[0].label);
				string temp = gentempcode();
				yyval.tipo = yyvsp[-1].tipo;
			
				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[0].label + "' já foi declarada\n";
				
				if (yyvsp[-1].isVector){
					addVector(yyvsp[0].label, yyval.tipo, temp, yyvsp[-1].vetor, "0");
				}

				else if (yyvsp[-1].tipo == "int"){
					addSimbolo(yyvsp[0].label, "int", temp);
			
					yyval.traducao = "\t" + temp + " = 0" + ";\n";
					yyval.label = "int " + yyvsp[0].label;
				}

				else if (yyvsp[-1].tipo == "float"){
					addSimbolo(yyvsp[0].label, "float", temp);
		
					yyval.traducao = "\t" + temp + " = 0.0" + ";\n";
					yyval.label = "float " + yyvsp[0].label;
				}

				else if (yyvsp[-1].tipo == "bool"){
					string temp = gentempcode();
					addSimbolo(yyvsp[0].label, "bool", temp);
			
					yyval.traducao = yyvsp[0].traducao + yyvsp[-1].traducao + "\t" + temp + " = 0" + ";\n";
					yyval.label = temp;
				}

				else if (yyvsp[-1].tipo == "char"){
					addSimbolo(yyvsp[0].label, "char",  temp);
			
					yyval.traducao = "\t" + temp + " = " + "'" + "\0" +"'" + ";\n";
					yyval.label = "int " + yyvsp[0].label;
				}

				else if (yyvsp[-1].tipo == "string"){
					addStr(yyvsp[0].label, "string",  temp, "\0");
					yyval.label = "\tstrcpy(" + temp + ", " + "\"\\0\"" + ");\n";
				}
			}
#line 2521 "y.tab.c"
    break;

  case 52:
#line 742 "sintatico.y"
                        {
				yyval.tipo = yyvsp[-3].tipo;
				bool encontrei = buscaVariavel(yyvsp[-2].label); 
				string temp = gentempcode();

				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[-2].label + "' já foi declarada\n";


				if (yyvsp[-3].isVector){
					if (yyvsp[-3].tipo != yyvsp[0].tipo) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Não é permirtido tipos diferentes na inicialização do vetor (" + yyvsp[-2].label + ")\n";

					cout << "Num_elementos_iniciados = " + std::to_string(num_elementos_iniciados) + " sizeVector = " + std::to_string(yyvsp[-3].sizeVector) << endl;

					if (num_elementos_iniciados > yyvsp[-3].sizeVector) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Excesso de elementos para o vetor (" + yyvsp[-2].label + ")\n";
					addVector(yyvsp[-2].label, yyvsp[-3].tipo, temp, yyvsp[-3].vetor, yyvsp[0].conteudo);
					num_elementos_iniciados = 0;
				}
				
				else if (yyvsp[-3].tipo == yyvsp[0].tipo && yyvsp[-3].tipo == "string"){
					addStr(yyvsp[-2].label, "string", temp, yyvsp[0].conteudo);
					yyval.traducao = yyvsp[0].traducao + "\tstrcpy(" + temp + ", " + yyvsp[0].label + ");\n"; 
				}

				
				else if (yyvsp[-3].tipo == yyvsp[0].tipo){
					addSimbolo(yyvsp[-2].label, yyvsp[-3].tipo, temp);
			
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + temp + " = " + yyvsp[0].label + ";\n";
					yyval.label = yyvsp[-3].tipo + yyvsp[-2].label + " = " + yyvsp[0].label;
				}

				else if(yyvsp[-3].tipo == "bool"){ 
					if(yyvsp[0].tipo != "bool"){
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m valor (" + yyvsp[0].conteudo + ") inválido para o tipo bool\n";
					}
						
					addSimbolo(yyvsp[-2].label, "bool", temp);
					string val_bool;
					
					if (yyvsp[0].label_bool == "True") val_bool = "1";
					else val_bool = "0";

					yyval.traducao = "\t" + temp + " = " + val_bool + ";\n";
					yyval.label = "int " + yyvsp[-2].label + " = " + yyvsp[0].label;
				}

				else if (yyvsp[-3].tipo == "int"){
					if (yyvsp[0].tipo == "float"){
						cout << "segundo é float\n";
						addSimbolo(yyvsp[-2].label, "int", temp);
						yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
						
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "int", yyval.label);
						yyval.traducao = yyvsp[0].traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
						"\t" + temp + " = " + yyval.label + ";\n";
					}

					if (yyvsp[0].tipo == "char"){
						addSimbolo(yyvsp[-2].label, "int", temp); 
						
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "int", yyval.label);
						yyval.traducao = yyvsp[0].traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
						"\t" + temp + " = " + yyval.label + ";\n";
					}
				}

				else if (yyvsp[-3].tipo == "float"){
					if (yyvsp[-3].tipo == "int"){
					addSimbolo(yyvsp[-2].label, "float", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "float", yyval.label);
					yyval.traducao = yyvsp[0].traducao + "\t" + yyval.label + " = (float) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyval.label + ";\n";
					}
				}

				else if (yyvsp[-3].tipo == "char"){
					if (yyvsp[0].tipo == "int"){
						addSimbolo(yyvsp[-2].label, "char", temp);
						yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
						
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "char", yyval.label);
						yyval.traducao = yyvsp[0].traducao + "\t" + yyval.label + " = (char) " + yyvsp[0].label + ";\n" + 
						"\t" + temp + " = " + yyval.label + ";\n";
					}

					if (yyvsp[0].tipo == "float"){
						addSimbolo(yyvsp[-2].label, "char", temp);
						yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
						
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "char", yyval.label);
						yyval.traducao = yyvsp[0].traducao + "\t" + yyval.label + " = (char) " + yyvsp[0].label + ";\n" + 
						"\t" + temp + " = " + yyval.label + ";\n";
					}
				}

				else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Atribuição inválida para a variável (" + yyvsp[-2].label + ")\n";
			}
#line 2631 "y.tab.c"
    break;

  case 53:
#line 849 "sintatico.y"
                        {
				yyval.tipo = yyvsp[0].tipo;
				bool encontrei = buscaVariavel(yyvsp[-1].label); 
				string temp = gentempcode();

				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[-1].label + "' já foi declarada\n";

				
				else if (yyvsp[0].tipo == "string"){
					addStr(yyvsp[-1].label, "string", temp, yyvsp[0].conteudo);
					yyval.traducao = yyvsp[0].traducao + "\tstrcpy(" + temp + ", " + yyvsp[0].label + ");\n"; 
				}

				else if(yyvsp[0].tipo == "bool"){ 	
					addSimbolo(yyvsp[-1].label, "bool", temp);
					string val_bool;
					
					if (yyvsp[0].label_bool == "True") val_bool = "1";
					else val_bool = "0";

					yyval.traducao = "\t" + temp + " = " + val_bool + ";\n";
					yyval.label = "int " + yyvsp[-1].label + " = " + yyvsp[0].label;
				}

				else if (yyvsp[0].tipo != "string" && yyvsp[0].tipo != "bool") {
					addSimbolo(yyvsp[-1].label, yyvsp[0].tipo, temp);

					yyval.traducao = yyvsp[0].traducao + "\t" + temp + " = " + yyvsp[0].label + ";\n";
					yyval.label = yyvsp[0].tipo + yyvsp[-1].label;
				}

				else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Atribuição inválida para a variável (" + yyvsp[-1].label + ")\n";
			}
#line 2670 "y.tab.c"
    break;

  case 54:
#line 885 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[0].label);
							
				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[0].label + "' já foi declarada\n";

				error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variável '" + yyvsp[0].label + "' não pode ser inicializada sem um tipo.\n";
			}
#line 2683 "y.tab.c"
    break;

  case 55:
#line 895 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-1].label);
							
				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[-1].label + "' já foi declarada\n";

				error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variável '" + yyvsp[-1].label + "' não pode ser inicializada sem um valor após ':='.\n";
			}
#line 2696 "y.tab.c"
    break;

  case 56:
#line 905 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-2].label);
							
				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[-2].label + "' já foi declarada\n";

				error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Não foi declarado um tipo para a variável '" + yyvsp[-2].label + "'.\n";
			}
#line 2709 "y.tab.c"
    break;

  case 57:
#line 915 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-2].label);
							
				if(encontrei)
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variavel '" + yyvsp[-2].label + "' já foi declarada\n";

				error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variável '" + yyvsp[-2].label + "' Declarada com o operador ':=' não dever ter tipo definido.\n";
			}
#line 2722 "y.tab.c"
    break;

  case 58:
#line 927 "sintatico.y"
                {
			yyval.sizeVector = stoi(yyvsp[-1].label);

			yyval.label = "[" + yyvsp[-1].label + "]";
			yyval.traducao = yyval.label;
		}
#line 2733 "y.tab.c"
    break;

  case 59:
#line 935 "sintatico.y"
                {
			bool encontrei = buscaVariavel(yyvsp[-1].label);
			if (!encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[-1].label + "Não declarada.\n";

			else{
				TIPO_SIMBOLO var = getSimbolo(yyvsp[-1].label);
				if (var.tipoVariavel != "int") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Tamanho do vetor (" + var.nomeVariavel + ") deve ser um inteiro\n";
				yyval.label = "[" + var.tempVariavel + "]";
				yyval.traducao = "[" + var.tempVariavel + "]";
			}
		}
#line 2749 "y.tab.c"
    break;

  case 60:
#line 948 "sintatico.y"
                {
			yyval.label = "[]";
			yyval.traducao = yyval.label;
			yyval.sizeVector = 500;
		}
#line 2759 "y.tab.c"
    break;

  case 61:
#line 956 "sintatico.y"
                                {
					TIPO_LOOP loop = getLaceBreak();
					yyval.traducao = "\tgoto " + loop.fimLaco + ";\n";
				}
#line 2768 "y.tab.c"
    break;

  case 62:
#line 962 "sintatico.y"
                                {
					TIPO_LOOP loop = getLaceBreak();
					yyval.traducao = "\tgoto " + loop.nomeLaco + ";\n";
				}
#line 2777 "y.tab.c"
    break;

  case 64:
#line 971 "sintatico.y"
                        {

			}
#line 2785 "y.tab.c"
    break;

  case 65:
#line 976 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2793 "y.tab.c"
    break;

  case 66:
#line 981 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2801 "y.tab.c"
    break;

  case 67:
#line 986 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2809 "y.tab.c"
    break;

  case 68:
#line 991 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2817 "y.tab.c"
    break;

  case 69:
#line 996 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2825 "y.tab.c"
    break;

  case 70:
#line 1001 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2833 "y.tab.c"
    break;

  case 71:
#line 1006 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2841 "y.tab.c"
    break;

  case 72:
#line 1011 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2849 "y.tab.c"
    break;

  case 73:
#line 1016 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2857 "y.tab.c"
    break;

  case 74:
#line 1021 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2865 "y.tab.c"
    break;

  case 75:
#line 1026 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2873 "y.tab.c"
    break;

  case 76:
#line 1031 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2881 "y.tab.c"
    break;

  case 77:
#line 1036 "sintatico.y"
                        {
				yyval.traducao = yyvsp[0].traducao;
			}
#line 2889 "y.tab.c"
    break;

  case 78:
#line 1041 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao;
			}
#line 2897 "y.tab.c"
    break;

  case 79:
#line 1047 "sintatico.y"
                {
			if ((yyvsp[-3].tipo == "int" && yyvsp[-1].tipo == "int") || (yyvsp[-3].tipo == "int" && yyvsp[-1].tipo == "float") 
				|| (yyvsp[-3].tipo == "float" && yyvsp[-1].tipo == "float") || (yyvsp[-3].tipo == "float" && yyvsp[-1].tipo == "int")) 
			{
				int base = stoi(yyvsp[-3].conteudo);
				int exp = stoi(yyvsp[-1].conteudo);
			
				yyval.traducao = yyvsp[-3].traducao + yyvsp[-1].traducao;
				
				string temp = gentempcode();				
				string temp2 = gentempcode();
				string result = gentempcode();
				string zero = gentempcode();
				addSimbolo(temp, "bool", temp);
				addSimbolo(temp2, "bool", temp2);
				addSimbolo(result, "float", result);
				addSimbolo(zero, "int", zero);
				string lace = genLacecode();
				string jump = label_jump();
				string inicio_loop = "INICIO_POW_" + jump;
				string fim_loop = "FIM_POW_" + jump;
				string cond_inicial = yyvsp[-1].label + " != " + zero + ";\n";

				string condicao = temp + " = !" + temp2;

				yyval.traducao = yyvsp[-3].traducao + yyvsp[-1].traducao + "\t" + zero + " = 0; //zero\n" + "\t" + 
				result + " = 1.0; //resultado\n" + inicio_loop + ":\n" +
				lace + ":\n" + "\t" + temp2 + " = " + cond_inicial + "\t" + condicao + ";\n" +
				"\n\tif (" + temp + ") goto " + fim_loop + ";\n" +
			 	"\t" + result + " = " + result + " * " + yyvsp[-3].label + ";\n" +
				"\t" + yyvsp[-1].label + " = " + yyvsp[-1].label + " -1;\n" +
				"\tgoto " + lace + ";\n" +
				fim_loop + ":\n\n";

				yyval.label = result;
			}
			else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Parâmetro inválido para potência (pow)\n";
		}
#line 2940 "y.tab.c"
    break;

  case 80:
#line 1087 "sintatico.y"
                {
			error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O comando (pow) precisa de dois parâmetros\n";
		}
#line 2948 "y.tab.c"
    break;

  case 81:
#line 1092 "sintatico.y"
                {
			error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O comando (pow) precisa de dois parâmetros\n"; 
		}
#line 2956 "y.tab.c"
    break;

  case 82:
#line 1098 "sintatico.y"
                {
			if (yyvsp[-1].tipo == "int" || yyvsp[-1].tipo == "float"){

				//precisão
				string temp1 = gentempcode(); 
				addSimbolo(temp1, "float", temp1);
				string precisao = "\t" + temp1 + " = 0.000001; // precisao\n";

				// Número 1
				string temp2 = gentempcode(); 
				addSimbolo(temp2, "float", temp2);
				string num_1 = "\t" + temp2 + " = 1; //num_1\n";

				// Número 2
				string temp9 = gentempcode(); 
				addSimbolo(temp9, "float", temp9);
				string num_2 = "\t" + temp9 + " = 2; //num_2 raiz quadrada\n";

				//Input
				string temp3 = gentempcode(); 
				addSimbolo(temp3, "float", temp3);
				string input = temp3 + " = " + yyvsp[-1].label + "; //input\n";

				// Aux Input 
				string temp7 = gentempcode(); 
				addSimbolo(temp7, "float", temp7);
				string aux_input = "\t" + temp7 + " = " + yyvsp[-1].label + "; // aux_input\n";

				// Cond_1 Aux_input - num_1
				string temp4 = gentempcode(); 
				addSimbolo(temp4, "int", temp4);
				string cond1 = "\t" + temp4 + " = " + temp7 + " - " + temp2 + "; //Aux_input - num_1\n";

				// Condição Final
				string temp5 = gentempcode(); 
				addSimbolo(temp5, "bool", temp5);
				string cond_final = "\t" + temp5 + " = " + temp4 + " >= " + temp1 + "; // condição final\n";
				
				// Nega condição Final
				string temp6 = gentempcode(); 
				addSimbolo(temp6, "bool", temp6);
				string condicao = "\t" + temp6 + " = !" + temp5 + "; //Nega cond_final\n";

				// Resultado
				string temp8 = gentempcode(); 
				addSimbolo(temp8, "float", temp8);
				string result = "\t" + temp8 + " = 0; // resultado\n";

				// num_1 + aux_input
				string temp10 = gentempcode(); 
				addSimbolo(temp10, "float", temp10);
				string operacao_1 = "\t" + temp10 + " = " + temp2 + " + " + temp7 + "; // num_1 + aux_input\n";

				// (num_1 + aux_input) / num_2
				string temp11 = gentempcode(); 
				addSimbolo(temp11, "float", temp11);
				string operacao_2 = "\t" + temp11 + " = " + temp10 + " / " + temp9 + "; // (num_1 + aux_input) / num_2\n";

				// Input / aux_input
				string temp12 = gentempcode(); 
				addSimbolo(temp12, "float", temp12);
				string operacao_3 = "\t" + temp12 + " = " + yyvsp[-1].label + " / " + temp7 + "; // Input / aux_input\n";

				// Jumpers
				string lace = genLacecode();
				string jump = label_jump();
				string inicio_loop = "INICIO_SQRT_" + jump;
				string fim_loop = "FIM_SQRT_" + jump;

				yyval.traducao = yyvsp[-1].traducao + precisao + aux_input + num_1 + num_2 + result + 
				inicio_loop + ":\n" +
				lace + ":\n" + cond1 + cond_final + condicao +
				"\n\tif (" + temp6 + ") goto " + fim_loop + ";\n" +
			 	operacao_1 + operacao_2 + "\t" + temp7 + " = " + temp11 + ";\n" +
				operacao_3 + "\t" + temp2 + " = " + temp12 + ";\n" + "\t" + temp8 + " = " + temp7 + ";\n" +
				"\tgoto " + lace + ";\n" +
				fim_loop + ":\n\n";

				yyval.label = temp8;
			}
			else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Parâmetro inválido para ráiz quadrada (sqrt)";
		}
#line 3043 "y.tab.c"
    break;

  case 83:
#line 1182 "sintatico.y"
                {
			error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m O comando (sqrt) precisa de um parâmetro real.\n"; 
		}
#line 3051 "y.tab.c"
    break;

  case 84:
#line 1189 "sintatico.y"
                        {
				yyval.label = gentempcode();
				string tipoAux;
				string labelAux;
				string converter;

				if(yyvsp[-2].tipo == yyvsp[0].tipo){
					if (yyvsp[-2].tipo == "string"){
						yyval.tipo = yyvsp[-2].tipo;
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						"strcat(" + yyvsp[-2].label + ", " + yyvsp[0].label + ");\n";
						addSimbolo(yyval.label, yyval.tipo, yyval.label);
					}

					else{
						yyval.tipo = yyvsp[-2].tipo;
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = " + yyvsp[-2].label + " + " + yyvsp[0].label + ";\n";
						addSimbolo(yyval.label, yyval.tipo, yyval.label);
					}
				}								
				else if(yyvsp[-2].tipo == "int" & yyvsp[0].tipo == "float"){
					yyval.tipo = yyvsp[0].tipo;
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
					converter = cast(yyvsp[-2].tipo, yyvsp[0].tipo);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = "  + converter + yyvsp[-2].label + ";\n";

					labelAux = yyval.label;
					yyval.label = gentempcode();
					addSimbolo(yyval.label, yyval.tipo, labelAux);
					yyval.traducao = yyval.traducao + "\t"+
					yyval.label + " = " + labelAux + " + " + yyvsp[0].label + ";\n";
				}

				else if(yyvsp[-2].tipo == "float" & yyvsp[0].tipo == "int"){
					yyval.tipo = yyvsp[-2].tipo;
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
					converter = cast(yyvsp[-2].tipo, yyvsp[0].tipo);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + cast(yyvsp[-2].tipo, yyvsp[0].tipo) + yyvsp[0].label + ";\n";

					labelAux = yyval.label;
					yyval.label = gentempcode();
					addSimbolo(yyval.label, yyval.tipo, labelAux);
					yyval.traducao = yyval.traducao + "\t"+
					yyval.label + " = " + yyvsp[-2].label + " + " + labelAux + ";\n";
				}
				
				else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Cast inválido\n";
				
			}
#line 3108 "y.tab.c"
    break;

  case 85:
#line 1243 "sintatico.y"
                        {
				yyval.label = gentempcode();
				string tipoAux;
				string labelAux;
				string converter;

				if(yyvsp[-2].tipo == yyvsp[0].tipo){
					yyval.tipo = yyvsp[-2].tipo;
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " - " + yyvsp[0].label + ";\n";
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
				}								
				else if(yyvsp[-2].tipo == "int" & yyvsp[0].tipo == "float"){
					yyval.tipo = yyvsp[0].tipo;
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
					converter = cast(yyvsp[-2].tipo, yyvsp[0].tipo);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = "  + converter + yyvsp[-2].label + ";\n";

					labelAux = yyval.label;
					yyval.label = gentempcode();
					addSimbolo(yyval.label, yyval.tipo, labelAux);
					yyval.traducao = yyval.traducao + "\t"+
					yyval.label + " = " + labelAux + " - " + yyvsp[0].label + ";\n";
				}

				else if(yyvsp[-2].tipo == "float" & yyvsp[0].tipo == "int"){
					yyval.tipo = yyvsp[-2].tipo;
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
					converter = cast(yyvsp[-2].tipo, yyvsp[0].tipo);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + cast(yyvsp[-2].tipo, yyvsp[0].tipo) + yyvsp[0].label + ";\n";

					labelAux = yyval.label;
					yyval.label = gentempcode();
					addSimbolo(yyval.label, yyval.tipo, labelAux);
					yyval.traducao = yyval.traducao + "\t"+
					yyval.label + " = " + yyvsp[-2].label + " - " + labelAux + ";\n";
				}
				
				else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Cast inválido\n";
			}
#line 3155 "y.tab.c"
    break;

  case 86:
#line 1287 "sintatico.y"
                        {
				yyval.label = gentempcode();
				string tipoAux;
				string labelAux;
				string converter;

				if(yyvsp[-2].tipo == yyvsp[0].tipo){
					yyval.tipo = yyvsp[-2].tipo;
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " * " + yyvsp[0].label + ";\n";
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
				}								
				else if(yyvsp[-2].tipo == "int" & yyvsp[0].tipo == "float"){
					yyval.tipo = yyvsp[0].tipo;
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
					converter = cast(yyvsp[-2].tipo, yyvsp[0].tipo);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = "  + converter + yyvsp[-2].label + ";\n";

					labelAux = yyval.label;
					yyval.label = gentempcode();
					addSimbolo(yyval.label, yyval.tipo, labelAux);
					yyval.traducao = yyval.traducao + "\t"+
					yyval.label + " = " + labelAux + " * " + yyvsp[0].label + ";\n";
				}

				else if(yyvsp[-2].tipo == "float" & yyvsp[0].tipo == "int"){
					yyval.tipo = yyvsp[-2].tipo;
					addSimbolo(yyval.label, yyval.tipo, yyval.label);
					converter = cast(yyvsp[-2].tipo, yyvsp[0].tipo);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + cast(yyvsp[-2].tipo, yyvsp[0].tipo) + yyvsp[0].label + ";\n";

					labelAux = yyval.label;
					yyval.label = gentempcode();
					addSimbolo(yyval.label, yyval.tipo, labelAux);
					yyval.traducao = yyval.traducao + "\t"+
					yyval.label + " = " + yyvsp[-2].label + " * " + labelAux + ";\n";
				}
				
				else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Cast inválido\n";
			}
#line 3202 "y.tab.c"
    break;

  case 87:
#line 1331 "sintatico.y"
                        {
				yyval.label = gentempcode();
				string tipoAux;
				string labelAux;
				string converter;
				
				string aux = yyvsp[0].conteudo;
				int cont = 0;
				int ponto = 0;

				for(int i = 0; i < aux.size(); i++)
				{
					if(aux[i] == '.')
					{
						ponto = 1;
					}
					if(aux[i] == '0')
					{
						cont++;
					}
				}

				if(cont == aux.size() || (cont + ponto) == aux.size()){
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Operação inválida, Divisão por 0\n";
				}

				else{
					if(yyvsp[-2].tipo == yyvsp[0].tipo){
						tipoAux = yyvsp[-2].tipo;
											
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = " + yyvsp[-2].label + " / " + yyvsp[0].label + ";\n";
						addSimbolo(yyval.label, tipoAux, yyval.label);
					}
					else if(yyvsp[-2].tipo == "int" & yyvsp[0].tipo == "float"){
						tipoAux = "float";
						addSimbolo(yyval.label, tipoAux, yyval.label);
						converter = cast(yyvsp[-2].tipo, yyvsp[-1].tipo);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = " + converter + yyvsp[-2].label + ";\n";

						labelAux = yyval.label;
						yyval.label = gentempcode();
						addSimbolo(yyval.label, tipoAux, labelAux);
						yyval.traducao = yyval.traducao + "\t"+
						yyval.label + " = " + labelAux + " / " + yyvsp[0].label + ";\n";
					}
					else if(yyvsp[-2].tipo == "float" & yyvsp[0].tipo == "int"){
						tipoAux = "float";
						addSimbolo(yyval.label, tipoAux, yyval.label);
						converter = cast(yyvsp[-2].tipo, yyvsp[-1].tipo);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = " + converter + yyvsp[0].label + ";\n";

						labelAux = yyval.label;
						yyval.label = gentempcode();
						addSimbolo(yyval.label, tipoAux, labelAux);
						yyval.traducao = yyval.traducao + "\t"+
						yyval.label + " = " + yyvsp[-2].label + " / " + labelAux + ";\n";
					}
					else{
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Divisão inválida\n";
					}
				}
			}
#line 3272 "y.tab.c"
    break;

  case 88:
#line 1398 "sintatico.y"
                        {
				yyval.label = gentempcode();

				if(yyvsp[-2].tipo == "int" & yyvsp[0].tipo == "int"){
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " % " + yyvsp[0].label + ";\n";
					addSimbolo(yyval.label, yyvsp[-2].tipo, yyval.label);
				}
				else{
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Operação não permitida no tipo float\n";
				}
			}
#line 3289 "y.tab.c"
    break;

  case 89:
#line 1412 "sintatico.y"
                        {
					TIPO_SIMBOLO var1 = getSimbolo(yyvsp[-1].label);
					yyval.traducao = yyvsp[-1].traducao + yyvsp[0].traducao + "\t" + 
					var1.tempVariavel + " = " + var1.tempVariavel + " + 1" + ";\n";
			}
#line 3299 "y.tab.c"
    break;

  case 90:
#line 1419 "sintatico.y"
                        {
					TIPO_SIMBOLO var1 = getSimbolo(yyvsp[-1].label);
					yyval.traducao = yyvsp[-1].traducao + yyvsp[0].traducao + "\t" + 
					var1.tempVariavel + " = " + var1.tempVariavel + " - 1" + ";\n";
			}
#line 3309 "y.tab.c"
    break;

  case 91:
#line 1426 "sintatico.y"
                        {
				string temp = gentempcode();
				yyval.label = temp;
				yyval.tipo = "bool";
				yyval.temp = temp;

				relacionalInvalida(yyvsp[-2].tipo, yyvsp[0].tipo);

				if (yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo != "string"){				
					addSimbolo(yyval.label, "bool", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " > " + yyvsp[0].label + ";\n";
				}

				else if (yyvsp[-2].tipo == "int" && yyvsp[0].tipo == "float"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " > " + yyval.label + ";\n";

					yyval.label = temp;
				}

				else if (yyvsp[-2].tipo == "float" && yyvsp[0].tipo == "int"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (float) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " > " + yyval.label + ";\n";

					yyval.label = temp;
				}
				
			}
#line 3354 "y.tab.c"
    break;

  case 92:
#line 1468 "sintatico.y"
                        {
				string temp = gentempcode();
				yyval.label = temp;
				yyval.tipo = "bool";
				yyval.temp = temp;

				relacionalInvalida(yyvsp[-2].tipo, yyvsp[0].tipo);

				if (yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo != "string"){				
					addSimbolo(yyval.label, "bool", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " < " + yyvsp[0].label + ";\n";
				}

				else if (yyvsp[-2].tipo == "int" && yyvsp[0].tipo == "float"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " < " + yyval.label + ";\n";

					yyval.label = temp;
				}

				else if (yyvsp[-2].tipo == "float" && yyvsp[0].tipo == "int"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (float) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " < " + yyval.label + ";\n";

					yyval.label = temp;
				}
			}
#line 3397 "y.tab.c"
    break;

  case 93:
#line 1508 "sintatico.y"
                        {
				string temp = gentempcode();
				yyval.label = temp;
				yyval.tipo = "bool";

				relacionalInvalida(yyvsp[-2].tipo, yyvsp[0].tipo);

				if (yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo != "string"){				
					addSimbolo(yyval.label, "bool", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " >= " + yyvsp[0].label + ";\n";
				}

				else if (yyvsp[-2].tipo == "int" && yyvsp[0].tipo == "float"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " >= " + yyval.label + ";\n";

					yyval.label = temp;
				}

				else if (yyvsp[-2].tipo == "float" && yyvsp[0].tipo == "int"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (float) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " >= " + yyval.label + ";\n";

					yyval.label = temp;
				}
			}
#line 3439 "y.tab.c"
    break;

  case 94:
#line 1547 "sintatico.y"
                        {
				string temp = gentempcode();
				yyval.label = temp;
				yyval.tipo = "bool";

				relacionalInvalida(yyvsp[-2].tipo, yyvsp[0].tipo);

				if (yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo != "string"){				
					addSimbolo(yyval.label, "bool", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " <= " + yyvsp[0].label + ";\n";
				}

				else if (yyvsp[-2].tipo == "int" && yyvsp[0].tipo == "float"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " <= " + yyval.label + ";\n";

					yyval.label = temp;
				}

				else if (yyvsp[-2].tipo == "float" && yyvsp[0].tipo == "int"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (float) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " <= " + yyval.label + ";\n";

					yyval.label = temp;
				}
			}
#line 3481 "y.tab.c"
    break;

  case 95:
#line 1586 "sintatico.y"
                        {
				string temp = gentempcode();
				yyval.label = temp;
				yyval.tipo = "bool";

				relacionalInvalida(yyvsp[-2].tipo, yyvsp[0].tipo);

				if (yyvsp[-2].tipo == yyvsp[0].tipo && yyvsp[-2].tipo != "string"){				
					addSimbolo(yyval.label, "bool", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
					yyval.label + " = " + yyvsp[-2].label + " == " + yyvsp[0].label + ";\n";
				}

				else if (yyvsp[-2].tipo == "int" && yyvsp[0].tipo == "float"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (int) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " == " + yyval.label + ";\n";
					
					yyval.label = temp;
				}

				else if (yyvsp[-2].tipo == "float" && yyvsp[0].tipo == "int"){
					addSimbolo(temp, "bool", temp);
					yyval.traducao = "\t" + temp + " = 0" + ";\n"; 
					
					yyval.label = gentempcode();
					addSimbolo(yyval.label, "int", yyval.label);
					yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + yyval.traducao + "\t" + yyval.label + " = (float) " + yyvsp[0].label + ";\n" + 
					"\t" + temp + " = " + yyvsp[-2].label + " == " + yyval.label + ";\n";

					yyval.label = temp;
				}
			}
#line 3523 "y.tab.c"
    break;

  case 96:
#line 1625 "sintatico.y"
                        {
				relacionalInvalida(yyvsp[-2].tipo, yyvsp[0].tipo);
				yyval.label = gentempcode();
				yyval.tipo = "bool";
				addSimbolo(yyval.label, "bool", yyval.label);
				yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
				yyval.label + " = " + yyvsp[-2].label + " != " + yyvsp[0].label + ";\n";
			}
#line 3536 "y.tab.c"
    break;

  case 97:
#line 1635 "sintatico.y"
                        {
				yyval.label = gentempcode();
				yyval.tipo = "bool";
				addSimbolo(yyval.label, "bool", yyval.label);
				yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
				yyval.label + " = " + yyvsp[-2].label + " || " + yyvsp[0].label + ";\n";
			}
#line 3548 "y.tab.c"
    break;

  case 98:
#line 1644 "sintatico.y"
                        {
				cout << "Traduções -> " + yyvsp[-2].traducao + yyvsp[0].traducao << endl;
				yyval.label = gentempcode();
				yyval.tipo = "bool";
				addSimbolo(yyval.label, "bool", yyval.label);
				yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + yyval.label + " = " + yyvsp[-2].label + " && " + yyvsp[0].label + ";\n";
			}
#line 3560 "y.tab.c"
    break;

  case 99:
#line 1653 "sintatico.y"
                        {
				yyval.label = gentempcode();
				yyval.tipo = "bool";
				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				yyval.traducao = yyvsp[0].traducao + "\t" + 
				yyval.label + " = " + "!" + yyvsp[0].label + ";\n";
			}
#line 3572 "y.tab.c"
    break;

  case 100:
#line 1662 "sintatico.y"
                        {
				cout << "Chamando Função\n";
			}
#line 3580 "y.tab.c"
    break;

  case 101:
#line 1667 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-2].label);
				if (!encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[-2].label + "Não declarada.\n";

				else{
					TIPO_SIMBOLO var = getSimbolo(yyvsp[-2].label);
					
					if (var.tipoVariavel != "float") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variável (" + var.tipoVariavel + " " + var.nomeVariavel + ") não pode receber o retorno float do comando pow()\n";

					else yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + var.tempVariavel + " = " + yyvsp[0].label + ";\n";
				}
			}
#line 3597 "y.tab.c"
    break;

  case 102:
#line 1681 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-2].label);
				if (!encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[-2].label + "Não declarada.\n";

				else{
					TIPO_SIMBOLO var = getSimbolo(yyvsp[-2].label);
					
					if (var.tipoVariavel != "float") error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m A variável (" + var.tipoVariavel + " " + var.nomeVariavel + ") não pode receber o retorno float do comando sqrt()\n";

					else yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + var.tempVariavel + " = " + yyvsp[0].label + ";\n";
				}
			}
#line 3614 "y.tab.c"
    break;

  case 103:
#line 1695 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-2].label);
				bool busca_fun = buscaRetorno(yyvsp[-2].label);
				if (!encontrei && !busca_fun) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável(" + yyvsp[-2].label + "Não declarada.\n";

				else{
					TIPO_SIMBOLO var = getSimbolo(yyvsp[-2].label);
					if(var.tipoVariavel == yyvsp[0].tipo){
						if (var.tipoVariavel == "string"){
							yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\tstrcpy(" + var.tempVariavel + ", " + yyvsp[0].label + ");\n"; 
						}
		
						else{
							yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
							var.tempVariavel + " = " + yyvsp[0].label + ";\n";
						}
					}
					else if (var.tipoVariavel == "int" & yyvsp[0].tipo == "float")
					{
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "int", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = (int) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "float" & yyvsp[0].tipo == "int")
					{
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "float", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = (float) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "char" & yyvsp[0].tipo == "int"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "char", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (char) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "int" & yyvsp[0].tipo == "char"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "int", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (int) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "float" & yyvsp[0].tipo == "char"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "float", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (float) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "char" & yyvsp[0].tipo == "float"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "char", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (char) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else{ 
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Atribuição inviavel\n";
					}
				}
			}
#line 3685 "y.tab.c"
    break;

  case 104:
#line 1763 "sintatico.y"
                        {
				bool encontrei = buscaVariavel(yyvsp[-2].label);
				if (!encontrei) {
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[-2].label + ") Não Declarada.\n";
				}

				else{
					TIPO_SIMBOLO var = getSimbolo(yyvsp[-2].label);

					if(var.tipoVariavel == yyvsp[0].tipo){
						if (var.tipoVariavel == "string"){
							yyval.traducao = yyvsp[0].traducao + "\tstrcpy(" + var.tempVariavel + ", " + yyvsp[0].label + ");\n"; 
						}
		
						else{
							yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
							var.tempVariavel + " = " + yyvsp[0].label + ";\n";
						}
					}
					else if (var.tipoVariavel == "int" & yyvsp[0].tipo == "float")
					{
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "int", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = (int) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "float" & yyvsp[0].tipo == "int")
					{
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "float", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" + 
						yyval.label + " = (float) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "char" & yyvsp[0].tipo == "int"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "char", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (char) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "int" & yyvsp[0].tipo == "char"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "int", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (int) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "float" & yyvsp[0].tipo == "char"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "float", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (float) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else if (var.tipoVariavel == "char" & yyvsp[0].tipo == "float"){
						yyval.label = gentempcode();
						addSimbolo(yyval.label, "char", yyval.label);
						yyval.traducao = yyvsp[-2].traducao + yyvsp[0].traducao + "\t" +
						yyval.label + " = (char) " + yyvsp[0].label + ";\n" + "\t" + 
						var.tempVariavel + " = " + yyval.label + ";\n";
					}
					else{ 
						error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Atribuição inviavel\n";
					}
				}
			}
#line 3758 "y.tab.c"
    break;

  case 105:
#line 1833 "sintatico.y"
                        {
				yyval.tipo = yyvsp[0].tipo;
				yyval.conteudo = yyvsp[0].conteudo;
				yyval.label = yyvsp[0].label;
				yyval.traducao = yyvsp[0].traducao;
			}
#line 3769 "y.tab.c"
    break;

  case 106:
#line 1841 "sintatico.y"
                        {
					TIPO_SIMBOLO variavel = getSimbolo(yyvsp[0].label);	
					yyval.tipo = variavel.tipoVariavel;
					yyval.label = variavel.tempVariavel;
					yyval.temp = yyval.label;
			}
#line 3780 "y.tab.c"
    break;

  case 107:
#line 1849 "sintatico.y"
                        {		
				yyval.label = gentempcode();
				yyval.tipo  = "float";

				addSimbolo(yyval.label, yyval.tipo, yyval.label);
				
				if(yyvsp[-1].tipo == "int")
				{	
					yyval.traducao = yyvsp[-1].traducao + "\t" + 
					yyval.label + " = " + "(float) " + yyvsp[-1].label + ";\n";  
				}
				
				else
					error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Cast Inválido\n";
			}
#line 3800 "y.tab.c"
    break;

  case 108:
#line 1866 "sintatico.y"
                        {	
				yyval.label = gentempcode();
				yyval.tipo  = "int";
				addSimbolo(yyval.label, yyval.tipo, yyval.label);

				if(yyvsp[-1].tipo == "float")
				{
					yyval.traducao = yyvsp[-1].traducao + "\t" + 
					yyval.label + " = " + "(int) " + yyvsp[-1].label + ";\n";
				}
				
				else error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Operacao invalida\n";
			}
#line 3818 "y.tab.c"
    break;

  case 109:
#line 1881 "sintatico.y"
                        {
				yyval.traducao = yyvsp[-1].traducao + "\tcout << " + yyvsp[-1].label + " << endl;\n";
			}
#line 3826 "y.tab.c"
    break;

  case 110:
#line 1886 "sintatico.y"
                        {
					yyval.traducao = yyvsp[-1].traducao + "\tcout << " + yyvsp[-1].label + ";\n";
				
			}
#line 3835 "y.tab.c"
    break;

  case 111:
#line 1892 "sintatico.y"
                        {
				yyval.label = gentempcode();
				yyval.tipo = yyvsp[-1].tipo;

				bool encontrei = buscaVariavel(yyvsp[-1].label);
				if (!encontrei) error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variável (" + yyvsp[-1].label + ") Não declarada.\n";
				
				TIPO_SIMBOLO var = getSimbolo(yyvsp[-1].label);

				yyval.traducao = yyvsp[-1].traducao + "\tcin >> " + var.tempVariavel + ";\n" + yyvsp[-2].traducao; 
			}
#line 3851 "y.tab.c"
    break;


#line 3855 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1905 "sintatico.y"


#include "lex.yy.c"

int yyparse();

string gentempcode(){
	var_temp_qnt++;
	return "t" + std::to_string(var_temp_qnt);
}

string genLacecode(){
	var_lace_qnt++;
	return "_L" + std::to_string(var_lace_qnt);	
}

string genCondcode(){
	var_cond_qnt++;
	return "FIM_IF_" + std::to_string(var_cond_qnt);
}

string genLaceNameCode(){
	var_lace_name_qnt++;
	return "loop_" + std::to_string(var_lace_name_qnt);
}

string label_jump(){
	num_jump++;
	return "J" + std::to_string(num_jump);
}

void addSimbolo(string nome, string tipo, string temp){
	TIPO_SIMBOLO var;
	var.nomeVariavel = nome;
	var.tipoVariavel = tipo;
	var.tempVariavel = temp;

	int contexto = mapa.size() - 1;
	mapa[contexto].push_back(var);
	
	print_var(var);				
}

void addVarFunc(string nome, string tipo, string temp){
	TIPO_SIMBOLO var;
	var.nomeVariavel = nome;
	var.tipoVariavel = tipo;
	var.tempVariavel = temp;
	var.varDeFunc = true;

	tabelaVarFunc.push_back(var);

	int contexto = mapa.size() - 1;
	mapa[contexto].push_back(var);
	
}

void addStr(string nome, string tipo, string temp, string conteudo){
	TIPO_SIMBOLO var;
	var.nomeVariavel = nome;
	var.tipoVariavel = tipo;
	var.tempVariavel = temp;
	var.conteudo = conteudo;

	int contexto = mapa.size() - 1;
	mapa[contexto].push_back(var);		
	print_var(var);		
}

void addVector(string nome, string tipo, string temp, string vetor, string conteudo){
	TIPO_SIMBOLO var;
	var.nomeVariavel = nome;
	var.tipoVariavel = tipo;
	var.tempVariavel = temp;
	var.vetor = vetor;
	var.conteudo = conteudo;

	int contexto = mapa.size() - 1;
	mapa[contexto].push_back(var);		
	print_var(var);		
}

void print_var(TIPO_SIMBOLO var){
	if (var.tipoVariavel == "bool") var.tipoVariavel = "int";

	if (var.tipoVariavel == "string"){
		var.tipoVariavel = "char";
		if (var.conteudo == "\0"){
			declaracoes += "\t" + var.tipoVariavel + " " + var.tempVariavel + "[" + strGeralSize + "];\t//" + var.nomeVariavel + "\n";
		}
		
		else{
			int size = getLength(var.conteudo) - 2;
			declaracoes += "\t" + var.tipoVariavel + " " + var.tempVariavel + "[" + std::to_string(size) + "];\t//" + var.nomeVariavel + "\n";
		}
	}
	else if (var.vetor != ""){
		declaracoes += "\t" + var.tipoVariavel + " " + var.tempVariavel + var.vetor + " = {" + var.conteudo + "};\n";
	}
	else{
		declaracoes += "\t" + var.tipoVariavel + " " + var.tempVariavel + ";\n";
	}			

}

bool buscaVariavel(string variavel){
	
	int contexto = mapa.size() - 1;
	vector<TIPO_SIMBOLO> tabelaSimbolos;
	tabelaSimbolos = mapa[contexto];

	for(int i = 0; i < tabelaSimbolos.size(); i++)
	{
		if(tabelaSimbolos[i].nomeVariavel == variavel)
		{
			return true;
		}
	}
	return false;
}

TIPO_SIMBOLO getSimbolo(string variavel){
	
	int contexto = mapa.size() - 1;
	vector<TIPO_SIMBOLO> tabelaSimbolos;
	tabelaSimbolos = mapa[contexto];

	while(contexto >= 0)
	{
		for (int i = tabelaSimbolos.size() - 1; i >= 0; i--)
		{
			if(tabelaSimbolos[i].nomeVariavel == variavel)
			{
				cout << tabelaSimbolos[i].tipoVariavel + " " + tabelaSimbolos[i].nomeVariavel + " " + tabelaSimbolos[i].tempVariavel << endl;
				return tabelaSimbolos[i];
			}				
		}
		contexto--;
		tabelaSimbolos = mapa[contexto];
	}
	
	yyerror("\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Variavel *(" + variavel + ")* não declarada\n");
	exit(0);
	
}

TIPO_SIMBOLO getRetorno(string retorno){
	
	for (int i = tabelaVarFunc.size() - 1; i >= 0; i--)
	{
		if(tabelaVarFunc[i].nomeVariavel == retorno)
		{
			return tabelaVarFunc[i];
		}				
	}
	exit(0);
}

bool buscaRetorno(string retorno){
	
	for (int i = tabelaVarFunc.size() - 1; i >= 0; i--)
	{
		if(tabelaVarFunc[i].nomeVariavel == retorno)
		{
			return true;
		}				
	}
	return false;
}

string cast(string tipo1, string tipo2){
	
	if (tipo1 == "int" && tipo2 == "float" || tipo1 == "float" && tipo2 == "int")
		return "(float) ";
	
	error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Casting inválido\n";
	exit(0);
}

bool comparaTipo(string tipo1, string tipo2){
	if (tipo1 == tipo2) return true;

	return false;
}

void relacionalInvalida(string tipo1, string tipo2){
	if (tipo1 == "char" || tipo2 == "char" || tipo1 == "bool" || tipo2 == "bool") {
		error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Relacional Inválido\n";
	}
}

void inicializaAscii(){
	TABELA_ASCII elemento;

	elemento.indice = 0;
	elemento.caracter = "\0";
	table_ascii.push_back(elemento);

	for ( char i = 1; i < 127; i++ ) {

		elemento.indice = i;
		elemento.caracter = i;
		
		table_ascii.push_back(elemento);
    }
}

int getLength(string str){
	int i = 0;
	while (str[i] != '\0') i++;

	return i+1;
}


int main( int argc, char* argv[] )
{	
	var_temp_qnt = 0;
	contextoGlobal = 0;
	num_elementos_iniciados = 0;
	vector<TIPO_SIMBOLO> tabelaSimbolos;
	mapa.push_back(tabelaSimbolos);
	
	cout << std::to_string(mapa.size()) << endl;

	yyparse();

	return 0;
}

void yyerror( string MSG )
{
	cout << MSG << endl;
	exit (0);
}				

void pushContexto(){
	vector<TIPO_SIMBOLO> tabelaSimbolos;
	mapa.push_back(tabelaSimbolos);
}

void popContexto(){
	mapa.pop_back();
}

void pushLoop(string tipo){

	TIPO_LOOP aux;
	aux.nomeLaco = "loop_" + std::to_string(var_lace_name_qnt);
	aux.tipoLaco = tipo;
	aux.fimLaco = genCondcode();
	aux.contexto = mapa.size();
	tabelaLoop.push_back(aux);
}

TIPO_LOOP getLace(string nome){

	for (int i = tabelaLoop.size() - 1; i >= 0; i--)
	{ 
		if(tabelaLoop[i].nomeLaco == nome){
			return tabelaLoop[i];
		}
	}
	exit(0);
}

TIPO_LOOP getLaceBreak(){
	int size = tabelaLoop.size();

	if(size == 0){
		error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Comando continue/break fora de laco\n";
	}

	return tabelaLoop[size - 1];
}


void contLinha(){
	num_linha++;
	linha_atual = std::to_string(num_linha);
}

void addFunc(string nome, string tipo){
	TIPO_FUNC new_func;
	new_func.nomeFunc = nome;
	new_func.tipo = tipo;

	tabelaFunc.push_back(new_func);
}

TIPO_FUNC getFunc(string func){
	for (int i = tabelaFunc.size() - 1; i >= 0; i--)
	{
		if(tabelaFunc[i].nomeFunc == func)
		{
			return tabelaFunc[i];
		}				
	}
	
	error += "\033[1;31mError\033[0m - \033[1;30mLinha " + linha_atual + ":\033[0m\033[1;39m Função (" + func + ") Função não Declarada" + "\n";
	exit(0);
}

bool buscaFunc(string func){
	for (int i = tabelaFunc.size() - 1; i >= 0; i--)
	{	
		if(tabelaFunc[i].nomeFunc == func)
		{
			return true;
		}				
	}
	
	return false;
}
