/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 35 "wmlparse.y"

#include "wml.h"

#if defined(__STDC__)
#include <string.h>		/* for strcpy() */
#endif

#ifndef XmConst
#if defined(__STDC__) || !defined( NO_CONST )
#define XmConst const
#else
#define XmConst
#endif /* __STDC__ */
#endif /* XmConst */

#if !defined(__STDC__)
/*
 * Undefine NULL, since it is defined in stdio
 */
#undef NULL
#endif

#line 44 "wmlparse.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define CLASS 1
#define RESOURCE 2
#define DATATYPE 3
#define CONTROLLIST 4
#define ENUMERATIONSET 5
#define ENUMERATIONVALUE 6
#define CHARACTERSET 7
#define CHILD 50
#define DOCNAME 8
#define CONVFUNC 9
#define ALIAS 10
#define TYPE 11
#define RESOURCELITERAL 12
#define RELATED 13
#define INTERNALLITERAL 14
#define XRMRESOURCE 15
#define EXCLUDE 16
#define RESOURCES 17
#define SUPERCLASS 18
#define CONTROLS 19
#define WIDGETCLASS 20
#define DIALOGCLASS 21
#define DEFAULT 22
#define ENUMLITERAL 23
#define XMSTRINGCHARSETNAME 24
#define DIRECTION 25
#define PARSEDIRECTION 26
#define CHARACTERSIZE 27
#define CTRLMAPSRESOURCE 28
#define CHILDREN 51
#define PARENTCLASS 52
#define METACLASS 29
#define WIDGET 30
#define GADGET 31
#define ARGUMENT 32
#define REASON 33
#define CONSTRAINT 34
#define SUBRESOURCE 35
#define ATTRTRUE 36
#define ATTRFALSE 37
#define LEFTTORIGHT 38
#define RIGHTTOLEFT 39
#define ONEBYTE 40
#define TWOBYTE 41
#define MIXED1_2BYTE 42
#define COLON 43
#define SEMICOLON 44
#define EQUALS 45
#define LBRACE 46
#define RBRACE 47
#define STRING 48
#define ERRORTOKEN 49
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
   10,    1,    2,   11,   11,   13,   11,    3,   14,   14,
   16,   14,    4,   17,   17,   19,   17,    5,   20,   20,
   22,   20,    6,   23,   23,   25,   23,    7,   26,   26,
   28,   26,    8,   29,   29,   31,   29,    9,   32,   32,
   34,   32,   38,   12,   36,   36,   36,   37,   37,   37,
   40,   37,   39,   39,   43,   41,   46,   41,   41,   41,
   41,   50,   41,   42,   42,   42,   42,   42,   42,   42,
   42,   44,   45,   45,   47,   51,   51,   51,   53,   51,
   52,   52,   56,   54,   57,   54,   55,   55,   55,   59,
   55,   58,   58,   62,   60,   64,   60,   65,   60,   61,
   61,   63,   48,   66,   66,   66,   68,   66,   67,   67,
   71,   69,   72,   69,   70,   70,   73,   70,   49,   74,
   74,   74,   76,   74,   75,   75,   78,   77,   79,   77,
   82,   15,   80,   80,   80,   80,   81,   81,   81,   84,
   81,   83,   83,   87,   85,   89,   85,   90,   85,   86,
   86,   86,   86,   86,   86,   86,   86,   88,   18,   92,
   21,   91,   91,   91,   94,   91,   93,   93,   97,   95,
   98,   95,   96,   96,   96,  100,   24,   99,   99,   99,
  102,   99,  101,  101,  105,  103,  106,  103,  104,  104,
  107,  104,  110,   27,  108,  109,  109,  109,  112,  109,
  111,  111,  114,  113,  115,  113,  117,   30,  116,  116,
  116,  119,  116,  118,  118,  122,  120,  123,  120,  121,
  125,   33,  124,  124,  124,  127,  124,  126,  126,  130,
  128,  133,  128,  134,  128,  129,  129,  129,  131,  131,
  131,  132,  132,  132,  132,  132,   35,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    0,    3,    2,    2,    3,    0,    3,    2,    2,    3,
    0,    3,    2,    2,    3,    0,    3,    2,    2,    3,
    0,    3,    2,    2,    3,    0,    3,    2,    2,    3,
    0,    3,    2,    2,    3,    0,    3,    2,    2,    3,
    0,    3,    0,    5,    1,    1,    1,    0,    2,    3,
    0,    3,    1,    2,    0,    5,    0,    5,    2,    2,
    2,    0,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    2,    0,    2,    3,    0,    3,
    1,    2,    0,    4,    0,    3,    0,    2,    3,    0,
    3,    1,    2,    0,    5,    0,    5,    0,    3,    1,
    1,    1,    2,    0,    2,    3,    0,    3,    1,    2,
    0,    4,    0,    3,    0,    2,    0,    3,    2,    0,
    2,    3,    0,    3,    1,    2,    0,    3,    0,    3,
    0,    5,    1,    1,    1,    1,    0,    2,    3,    0,
    3,    1,    2,    0,    5,    0,    5,    0,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    0,
    3,    0,    2,    3,    0,    3,    1,    2,    0,    5,
    0,    3,    1,    1,    1,    0,    3,    0,    2,    3,
    0,    3,    1,    2,    0,    4,    0,    3,    0,    2,
    0,    3,    0,    5,    1,    0,    2,    3,    0,    3,
    1,    2,    0,    3,    0,    3,    0,    4,    0,    2,
    3,    0,    3,    1,    2,    0,    5,    0,    3,    1,
    0,    3,    0,    2,    3,    0,    3,    1,    2,    0,
    5,    0,    5,    0,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         1,
    0,   11,    0,    0,    0,    0,    0,    0,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    9,   10,    0,
   16,  257,    0,    0,    0,   21,    0,    0,    0,   31,
    0,    0,  170,   36,    0,    0,  186,   41,    0,    0,
    0,   46,    0,    0,    0,   51,    0,    0,  231,   26,
    0,    0,    0,   12,    0,    0,   14,    0,    0,    0,
   19,    0,    0,    0,   29,    0,    0,    0,   34,    0,
    0,    0,   39,    0,    0,    0,   44,  217,    0,    0,
   49,    0,    0,    0,   24,    0,   17,   15,   55,   56,
   57,   53,   22,   20,  143,  144,  145,  146,  141,   32,
   30,  175,    0,  171,   37,   35,  191,    0,  187,   42,
   40,  205,  203,   47,   45,    0,   52,   50,  236,    0,
  232,   27,   25,  169,    0,    0,    0,  181,  184,  183,
  185,  173,    0,  177,    0,    0,  197,  189,  195,    0,
  193,    0,  222,    0,  218,    0,  244,  247,  246,  248,
  249,  250,  251,  234,    0,  238,    0,    0,   61,    0,
   54,  150,    0,  142,  176,    0,  174,  178,    0,  192,
    0,    0,  190,  194,  209,    0,  204,    0,  228,  230,
  220,    0,  224,    0,  237,    0,  235,  239,    0,    0,
    0,   72,   77,   78,   81,   76,    0,   74,    0,   79,
   82,   80,    0,   75,   59,    0,   63,    0,    0,    0,
    0,    0,    0,  158,  162,  165,  167,  160,  161,  164,
  163,  168,  166,  148,    0,  152,    0,    0,  182,  179,
  198,  201,    0,    0,    0,  215,  207,  213,    0,  211,
  223,    0,  221,  225,    0,  245,  240,  252,  253,  254,
  255,  256,  242,   62,    0,   89,    0,   85,  117,    0,
  113,  133,    0,  129,   60,   64,    0,    0,   69,   70,
   71,  151,    0,  149,  153,    0,    0,    0,    0,  200,
  196,  210,    0,    0,  208,  212,  229,  226,    0,    0,
   73,    0,   95,   87,   93,    0,   91,    0,  123,  115,
  121,    0,  119,    0,  139,  131,  137,    0,  135,   65,
   83,   84,   67,  159,  154,  156,  180,  202,  216,  214,
    0,  241,  243,   90,    0,    0,   88,   92,  118,    0,
    0,  116,  120,  134,    0,    0,  132,  136,    0,    0,
    0,    0,  227,   96,  100,    0,    0,  124,  127,    0,
    0,  140,  138,   66,   68,  155,  157,    0,  108,  110,
  112,  111,   98,    0,  102,    0,    0,   94,    0,  126,
  122,  101,    0,   99,  103,    0,    0,  128,  109,  104,
  106,    0,    0,  105,  107,
};
static const YYINT yydgoto[] = {                          1,
   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
   23,   24,   55,   27,   28,   59,   51,   52,   83,   31,
   32,   63,   35,   36,   67,   39,   40,   71,   43,   44,
   75,   47,   48,   79,   25,   92,  161,  125,  206,  191,
  207,  208,  339,  209,  313,  340,  210,  211,  212,  255,
  258,  296,  292,  297,  347,  326,  325,  364,  358,  365,
  366,  382,  367,  383,  373,  261,  302,  298,  303,  351,
  331,  330,  369,  264,  308,  304,  309,  336,  335,   99,
  164,  126,  225,  213,  226,  227,  341,  228,  342,  273,
  104,   66,  133,  127,  134,  135,  278,  166,  109,   70,
  140,  136,  141,  234,  172,  171,  279,  113,  177,  142,
  239,  235,  240,  284,  283,  145,  116,  182,  178,  183,
  184,  321,  242,  121,   82,  155,  146,  156,  157,  289,
  158,  253,  290,  186,
};
static const YYINT yysindex[] = {                         0,
  116,    0,  -22,  -16,   12,   53,   65,   81,   87,   93,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -11,
    0,    0,  -20,    2,  100,    0,  -20,  108,  110,    0,
  -20,  114,    0,    0,  -20,  121,    0,    0,  -20,  156,
  169,    0,  -20,  175,  170,    0,  -20,  184,    0,    0,
  -20,  185,  190,    0,  188,  202,    0,  193,  205,  208,
    0,  248,  214,  216,    0,  -17,  218,  221,    0,   -9,
  222,  240,    0,  213,  241,  242,    0,    0,  243,  244,
    0,   -8,  245,  246,    0,  247,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  123,    0,    0,    0,    0,   55,    0,    0,
    0,    0,    0,    0,    0,   -6,    0,    0,    0,  191,
    0,    0,    0,    0,   -5,   -2,  249,    0,    0,    0,
    0,    0,  189,    0,   -3,  250,    0,    0,    0,   67,
    0,   -1,    0,    1,    0,  252,    0,    0,    0,    0,
    0,    0,    0,    0,  217,    0,  192,  255,    0,  159,
    0,    0,  134,    0,    0,  257,    0,    0,  254,    0,
  259,   13,    0,    0,    0,   78,    0,  260,    0,    0,
    0,   11,    0,  261,    0,  268,    0,    0,  265,  237,
  267,    0,    0,    0,    0,    0,   16,    0,   17,    0,
    0,    0,   18,    0,    0,  174,    0,  270,  271,  273,
  274,  275,  277,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  149,    0,  280,  281,    0,    0,
    0,    0,  282,  276,  284,    0,    0,    0,   80,    0,
    0,  283,    0,    0,  285,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  288,    0,   86,    0,    0,  103,
    0,    0,  127,    0,    0,    0,  287,  171,    0,    0,
    0,    0,  295,    0,    0,  292,  171,  297,  298,    0,
    0,    0,  300,  303,    0,    0,    0,    0,  304,  306,
    0,  305,    0,    0,    0,  138,    0,  307,    0,    0,
    0,  142,    0,  308,    0,    0,    0,  151,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  309,    0,    0,    0,  312,   52,    0,    0,    0,  313,
   54,    0,    0,    0,  314,  316,    0,    0,  318,  319,
  320,  321,    0,    0,    0,   14,  322,    0,    0,  323,
  324,    0,    0,    0,    0,    0,    0,  326,    0,    0,
    0,    0,    0,  198,    0,  329,  330,    0,  331,    0,
    0,    0,  325,    0,    0,  328,  171,    0,    0,    0,
    0,  327,  333,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    7,    0,    0,    0,   15,    0,    0,    0,
   49,    0,    0,    0,   66,    0,    0,    0,   74,    0,
    0,    0,   82,    0,    0,    0,   90,    0,    0,    0,
  105,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  336,    0,    0,    0,  337,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  338,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  340,    0,    0,    0,    0,
    0,    0,    0,    0,  341,  342,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  343,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  344,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  345,    0,  241,    0,
    0,    0,  347,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  348,    0,    0,    0,    0,
  349,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  372,    0,    0,  264,    0,    0,  346,    0,    0,
  262,    0,    0,  293,    0,    0,  357,    0,    0,  251,
    0,    0,  352,    0,   -4,    0,    0,    0,    0,    0,
  145,    0,    0,    0, -147,    0,    0,    0,    0,    0,
    0,    0,    0,   71,    0,    0,    0,    0,    0,   36,
    0,    0,    0,    0,    0,    0,    0,    0,   99,    0,
    0,    0,    0,    0,    0,    0,   94,    0,    0,    0,
    0,    0,    0,    0,  178,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  278,    0,    0,    0,    0,    0,
    0,    0,  266,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  165,    0,    0,    0,    0,    0,    0,  226,
    0,    0,    0,    0,    0,    0,    0,  258,    0,    0,
    0,    0,    0,    0,
};
#define YYTABLESIZE 473
static const YYINT yytable[] = {                         29,
   33,   37,   41,   45,   49,   53,   13,   13,   13,   13,
   13,   13,   13,   13,   18,   18,   18,   18,   18,   18,
   18,   18,   29,  180,  360,   22,   33,   22,  103,  361,
   37,   22,   54,  180,   41,  362,  108,  120,   45,  144,
  160,  169,   49,  163,  176,   57,   53,  181,   28,   28,
   28,   28,   28,   28,   28,   28,   13,  243,  233,   22,
  363,  257,  260,  263,   18,   33,   33,   33,   33,   33,
   33,   33,   33,   38,   38,   38,   38,   38,   38,   38,
   38,   43,   43,   43,   43,   43,   43,   43,   43,   48,
   48,   48,   48,   48,   48,   48,   48,  346,   28,  350,
   22,  138,   22,  139,   23,   23,   23,   23,   23,   23,
   23,   23,   22,  173,   22,   33,    3,    4,    5,    6,
    7,    8,    9,   38,  237,   22,  285,   22,   22,  316,
  129,   43,  294,   22,   22,  139,  130,  131,  215,   48,
   22,  216,   58,  217,  218,  219,  220,  221,  222,  300,
   22,   61,   62,  215,   23,  223,  216,   65,  217,  218,
  219,  220,  221,  222,   69,   10,  193,  194,  195,  132,
  223,  238,  196,  306,   22,  197,  198,  199,  200,  201,
  224,  193,  194,  195,  327,   22,  202,  196,  332,   22,
  197,  198,  199,  200,  201,  274,  129,  337,   22,   73,
  148,  202,  130,  131,  149,  205,  311,  312,  360,  203,
  204,   74,   78,  361,  150,  151,  152,  153,   77,  362,
  265,   89,   90,   91,  203,  204,  148,   81,   85,  381,
  149,   87,   86,   21,  238,  167,  189,  154,  102,   26,
  150,  151,  152,  153,  374,   88,  107,  119,   93,  143,
  159,   94,  295,  162,  175,  301,  179,  100,  307,  101,
  112,  105,   13,  187,  106,  110,  179,   30,  232,  359,
   18,  256,  259,  262,  248,  249,  250,  251,  252,   95,
   96,   97,   98,  111,  114,  115,  117,  118,  122,  123,
   60,  295,   64,   76,  124,  165,  170,  301,  185,  190,
  229,  230,  231,  307,   28,  245,  241,  345,   34,  349,
  137,  246,  247,  254,  267,  268,  269,  270,  271,  281,
   38,   33,  137,  272,  276,  277,  287,   68,  280,   38,
  282,  291,  288,  236,  310,  236,   42,   43,  314,  315,
  317,  293,   46,  319,  318,   48,  320,  322,   50,  323,
  266,  324,  343,  329,  334,  344,  348,  352,  299,  353,
   23,  354,  355,  356,  357,  368,  328,  371,  379,  370,
  384,    2,  372,  376,  377,  380,  385,  378,  128,  172,
  188,  233,  305,  219,   58,  147,  206,  199,   86,  214,
  130,   97,  125,  293,   56,   72,   84,  299,   80,  375,
  333,  338,  275,  286,  214,  174,  305,  244,    0,    0,
  168,    0,  188,    0,  192,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  192,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  128,    0,  147,    0,    0,    0,
    0,    0,    0,  359,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  147,
};
static const YYINT yycheck[] = {                          4,
    5,    6,    7,    8,    9,   10,    0,    1,    2,    3,
    4,    5,    6,    7,    0,    1,    2,    3,    4,    5,
    6,    7,   27,   23,   11,   48,   31,   48,   46,   16,
   35,   48,   44,   23,   39,   22,   46,   46,   43,   46,
   46,   45,   47,   46,   46,   44,   51,   47,    0,    1,
    2,    3,    4,    5,    6,    7,   50,   47,   46,   48,
   47,   46,   46,   46,   50,    0,    1,    2,    3,    4,
    5,    6,    7,    0,    1,    2,    3,    4,    5,    6,
    7,    0,    1,    2,    3,    4,    5,    6,    7,    0,
    1,    2,    3,    4,    5,    6,    7,   46,   50,   46,
   48,   47,   48,  108,    0,    1,    2,    3,    4,    5,
    6,    7,   48,   47,   48,   50,    1,    2,    3,    4,
    5,    6,    7,   50,   47,   48,   47,   48,   48,  277,
    8,   50,   47,   48,   48,  140,   14,   15,    5,   50,
   48,    8,   43,   10,   11,   12,   13,   14,   15,   47,
   48,   44,   43,    5,   50,   22,    8,   44,   10,   11,
   12,   13,   14,   15,   44,   50,    8,    9,   10,   47,
   22,  176,   14,   47,   48,   17,   18,   19,   20,   21,
   47,    8,    9,   10,   47,   48,   28,   14,   47,   48,
   17,   18,   19,   20,   21,   47,    8,   47,   48,   44,
   10,   28,   14,   15,   14,   47,   36,   37,   11,   51,
   52,   43,   43,   16,   24,   25,   26,   27,   44,   22,
   47,   29,   30,   31,   51,   52,   10,   44,   44,  377,
   14,   44,   43,  256,  239,   47,   45,   47,  256,  256,
   24,   25,   26,   27,   47,   44,  256,  256,   44,  256,
  256,   44,  257,  256,  256,  260,  256,   44,  263,   44,
   48,   44,  256,   47,   44,   44,  256,  256,  256,  256,
  256,  256,  256,  256,   38,   39,   40,   41,   42,   32,
   33,   34,   35,   44,   44,   44,   44,   44,   44,   44,
   27,  296,   31,   43,   48,   47,   47,  302,   47,   45,
   44,   48,   44,  308,  256,   45,   47,  256,  256,  256,
  256,   44,   48,   47,   45,   45,   44,   44,   44,   44,
  256,  256,  256,   47,   45,   45,   44,   35,   47,  256,
   47,   44,   48,  256,   48,  256,  256,  256,   44,   48,
   44,  256,  256,   44,   47,  256,   44,   44,  256,   44,
  206,   47,   44,   47,   47,   44,   44,   44,  256,   44,
  256,   44,   44,   44,   44,   44,  296,   44,   44,   47,
   44,  256,   47,   45,   45,   48,   44,   47,  256,   44,
   44,   44,  256,   44,   44,   44,   44,   44,   44,  256,
   44,   44,   44,  256,   23,   39,   51,  256,   47,  364,
  302,  308,  225,  239,  256,  140,  256,  182,   -1,   -1,
  133,   -1,  155,   -1,  256,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  256,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  256,   -1,  256,   -1,   -1,   -1,
   -1,   -1,   -1,  256,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  256,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 256
#define YYUNDFTOKEN 393
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file","CLASS","RESOURCE","DATATYPE","CONTROLLIST","ENUMERATIONSET",
"ENUMERATIONVALUE","CHARACTERSET","DOCNAME","CONVFUNC","ALIAS","TYPE",
"RESOURCELITERAL","RELATED","INTERNALLITERAL","XRMRESOURCE","EXCLUDE",
"RESOURCES","SUPERCLASS","CONTROLS","WIDGETCLASS","DIALOGCLASS","DEFAULT",
"ENUMLITERAL","XMSTRINGCHARSETNAME","DIRECTION","PARSEDIRECTION",
"CHARACTERSIZE","CTRLMAPSRESOURCE","METACLASS","WIDGET","GADGET","ARGUMENT",
"REASON","CONSTRAINT","SUBRESOURCE","ATTRTRUE","ATTRFALSE","LEFTTORIGHT",
"RIGHTTOLEFT","ONEBYTE","TWOBYTE","MIXED1_2BYTE","COLON","SEMICOLON","EQUALS",
"LBRACE","RBRACE","STRING","ERRORTOKEN","CHILD","CHILDREN","PARENTCLASS",0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : statement_block_list",
"statement_block_list :",
"statement_block_list : statement_block_list statement_block",
"statement_block : class_statement_block",
"statement_block : resource_statement_block",
"statement_block : child_statement_block",
"statement_block : datatype_statement_block",
"statement_block : ctrlist_statement_block",
"statement_block : enumset_statement_block",
"statement_block : enumval_statement_block",
"statement_block : charset_statement_block",
"$$1 :",
"statement_block : error $$1 SEMICOLON",
"class_statement_block : CLASS class_statement_list",
"class_statement_list : class_statement SEMICOLON",
"class_statement_list : class_statement_list class_statement SEMICOLON",
"$$2 :",
"class_statement_list : error $$2 SEMICOLON",
"resource_statement_block : RESOURCE resource_statement_list",
"resource_statement_list : resource_statement SEMICOLON",
"resource_statement_list : resource_statement_list resource_statement SEMICOLON",
"$$3 :",
"resource_statement_list : error $$3 SEMICOLON",
"child_statement_block : CHILD child_statement_list",
"child_statement_list : child_statement SEMICOLON",
"child_statement_list : child_statement_list child_statement SEMICOLON",
"$$4 :",
"child_statement_list : error $$4 SEMICOLON",
"datatype_statement_block : DATATYPE datatype_statement_list",
"datatype_statement_list : datatype_statement SEMICOLON",
"datatype_statement_list : datatype_statement_list datatype_statement SEMICOLON",
"$$5 :",
"datatype_statement_list : error $$5 SEMICOLON",
"ctrlist_statement_block : CONTROLLIST ctrlist_statement_list",
"ctrlist_statement_list : ctrlist_statement SEMICOLON",
"ctrlist_statement_list : ctrlist_statement_list ctrlist_statement SEMICOLON",
"$$6 :",
"ctrlist_statement_list : error $$6 SEMICOLON",
"enumset_statement_block : ENUMERATIONSET enumset_statement_list",
"enumset_statement_list : enumset_statement SEMICOLON",
"enumset_statement_list : enumset_statement_list enumset_statement SEMICOLON",
"$$7 :",
"enumset_statement_list : error $$7 SEMICOLON",
"enumval_statement_block : ENUMERATIONVALUE enumval_statement_list",
"enumval_statement_list : enumval_statement SEMICOLON",
"enumval_statement_list : enumval_statement_list enumval_statement SEMICOLON",
"$$8 :",
"enumval_statement_list : error $$8 SEMICOLON",
"charset_statement_block : CHARACTERSET charset_statement_list",
"charset_statement_list : charset_statement SEMICOLON",
"charset_statement_list : charset_statement_list charset_statement SEMICOLON",
"$$9 :",
"charset_statement_list : error $$9 SEMICOLON",
"$$10 :",
"class_statement : name COLON class_type $$10 class_definition",
"class_type : METACLASS",
"class_type : WIDGET",
"class_type : GADGET",
"class_definition :",
"class_definition : LBRACE RBRACE",
"class_definition : LBRACE class_attribute_list RBRACE",
"$$11 :",
"class_definition : error $$11 RBRACE",
"class_attribute_list : class_attribute",
"class_attribute_list : class_attribute_list class_attribute",
"$$12 :",
"class_attribute : class_attribute_name EQUALS STRING $$12 SEMICOLON",
"$$13 :",
"class_attribute : boolean_class_attribute_name EQUALS boolean_attribute_value $$13 SEMICOLON",
"class_attribute : class_resources SEMICOLON",
"class_attribute : class_controls SEMICOLON",
"class_attribute : class_children SEMICOLON",
"$$14 :",
"class_attribute : error $$14 SEMICOLON",
"class_attribute_name : SUPERCLASS",
"class_attribute_name : PARENTCLASS",
"class_attribute_name : INTERNALLITERAL",
"class_attribute_name : DOCNAME",
"class_attribute_name : CONVFUNC",
"class_attribute_name : WIDGETCLASS",
"class_attribute_name : CTRLMAPSRESOURCE",
"class_attribute_name : ALIAS",
"boolean_class_attribute_name : DIALOGCLASS",
"boolean_attribute_value : ATTRTRUE",
"boolean_attribute_value : ATTRFALSE",
"class_resources : RESOURCES class_resources_block",
"class_resources_block :",
"class_resources_block : LBRACE RBRACE",
"class_resources_block : LBRACE class_resource_list RBRACE",
"$$15 :",
"class_resources_block : error $$15 RBRACE",
"class_resource_list : class_resource_element",
"class_resource_list : class_resource_list class_resource_element",
"$$16 :",
"class_resource_element : name $$16 class_resource_attributes SEMICOLON",
"$$17 :",
"class_resource_element : error $$17 SEMICOLON",
"class_resource_attributes :",
"class_resource_attributes : LBRACE RBRACE",
"class_resource_attributes : LBRACE class_resource_attribute_list RBRACE",
"$$18 :",
"class_resource_attributes : error $$18 RBRACE",
"class_resource_attribute_list : class_resource_attribute_element",
"class_resource_attribute_list : class_resource_attribute_list class_resource_attribute_element",
"$$19 :",
"class_resource_attribute_element : class_resource_attribute_name EQUALS STRING $$19 SEMICOLON",
"$$20 :",
"class_resource_attribute_element : boolean_class_resource_attribute_name EQUALS boolean_attribute_value $$20 SEMICOLON",
"$$21 :",
"class_resource_attribute_element : error $$21 SEMICOLON",
"class_resource_attribute_name : TYPE",
"class_resource_attribute_name : DEFAULT",
"boolean_class_resource_attribute_name : EXCLUDE",
"class_controls : CONTROLS class_controls_block",
"class_controls_block :",
"class_controls_block : LBRACE RBRACE",
"class_controls_block : LBRACE class_controls_list RBRACE",
"$$22 :",
"class_controls_block : error $$22 RBRACE",
"class_controls_list : class_controls_element",
"class_controls_list : class_controls_list class_controls_element",
"$$23 :",
"class_controls_element : name $$23 class_controls_attributes SEMICOLON",
"$$24 :",
"class_controls_element : error $$24 SEMICOLON",
"class_controls_attributes :",
"class_controls_attributes : LBRACE RBRACE",
"$$25 :",
"class_controls_attributes : error $$25 RBRACE",
"class_children : CHILDREN class_children_block",
"class_children_block :",
"class_children_block : LBRACE RBRACE",
"class_children_block : LBRACE class_children_list RBRACE",
"$$26 :",
"class_children_block : error $$26 RBRACE",
"class_children_list : class_children_element",
"class_children_list : class_children_list class_children_element",
"$$27 :",
"class_children_element : name $$27 SEMICOLON",
"$$28 :",
"class_children_element : error $$28 SEMICOLON",
"$$29 :",
"resource_statement : name COLON resource_type $$29 resource_definition",
"resource_type : ARGUMENT",
"resource_type : REASON",
"resource_type : CONSTRAINT",
"resource_type : SUBRESOURCE",
"resource_definition :",
"resource_definition : LBRACE RBRACE",
"resource_definition : LBRACE resource_attribute_list RBRACE",
"$$30 :",
"resource_definition : error $$30 RBRACE",
"resource_attribute_list : resource_attribute",
"resource_attribute_list : resource_attribute_list resource_attribute",
"$$31 :",
"resource_attribute : resource_attribute_name EQUALS STRING $$31 SEMICOLON",
"$$32 :",
"resource_attribute : boolean_resource_resource_attribute_name EQUALS boolean_attribute_value $$32 SEMICOLON",
"$$33 :",
"resource_attribute : error $$33 SEMICOLON",
"resource_attribute_name : TYPE",
"resource_attribute_name : RESOURCELITERAL",
"resource_attribute_name : ENUMERATIONSET",
"resource_attribute_name : INTERNALLITERAL",
"resource_attribute_name : RELATED",
"resource_attribute_name : DOCNAME",
"resource_attribute_name : DEFAULT",
"resource_attribute_name : ALIAS",
"boolean_resource_resource_attribute_name : XRMRESOURCE",
"child_statement : name COLON STRING",
"$$34 :",
"datatype_statement : name $$34 datatype_definition",
"datatype_definition :",
"datatype_definition : LBRACE RBRACE",
"datatype_definition : LBRACE datatype_attribute_list RBRACE",
"$$35 :",
"datatype_definition : error $$35 RBRACE",
"datatype_attribute_list : datatype_attribute",
"datatype_attribute_list : datatype_attribute_list datatype_attribute",
"$$36 :",
"datatype_attribute : datatype_attribute_name EQUALS STRING $$36 SEMICOLON",
"$$37 :",
"datatype_attribute : error $$37 SEMICOLON",
"datatype_attribute_name : INTERNALLITERAL",
"datatype_attribute_name : DOCNAME",
"datatype_attribute_name : XRMRESOURCE",
"$$38 :",
"ctrlist_statement : name $$38 ctrlist_definition",
"ctrlist_definition :",
"ctrlist_definition : LBRACE RBRACE",
"ctrlist_definition : LBRACE ctrlist_controls_list RBRACE",
"$$39 :",
"ctrlist_definition : error $$39 RBRACE",
"ctrlist_controls_list : ctrlist_control",
"ctrlist_controls_list : ctrlist_controls_list ctrlist_control",
"$$40 :",
"ctrlist_control : name $$40 ctrlist_controls_attributes SEMICOLON",
"$$41 :",
"ctrlist_control : error $$41 SEMICOLON",
"ctrlist_controls_attributes :",
"ctrlist_controls_attributes : LBRACE RBRACE",
"$$42 :",
"ctrlist_controls_attributes : error $$42 RBRACE",
"$$43 :",
"enumset_statement : name COLON enumset_data_type $$43 enumset_definition",
"enumset_data_type : STRING",
"enumset_definition :",
"enumset_definition : LBRACE RBRACE",
"enumset_definition : LBRACE enumset_value_list RBRACE",
"$$44 :",
"enumset_definition : error $$44 RBRACE",
"enumset_value_list : enumset_value",
"enumset_value_list : enumset_value_list enumset_value",
"$$45 :",
"enumset_value : name $$45 SEMICOLON",
"$$46 :",
"enumset_value : error $$46 SEMICOLON",
"$$47 :",
"enumval_statement : name COLON $$47 enumvalue_definition",
"enumvalue_definition :",
"enumvalue_definition : LBRACE RBRACE",
"enumvalue_definition : LBRACE enumvalue_attributes_list RBRACE",
"$$48 :",
"enumvalue_definition : error $$48 RBRACE",
"enumvalue_attributes_list : enumvalue_attribute",
"enumvalue_attributes_list : enumvalue_attributes_list enumvalue_attribute",
"$$49 :",
"enumvalue_attribute : enumvalue_attribute_name EQUALS STRING $$49 SEMICOLON",
"$$50 :",
"enumvalue_attribute : error $$50 SEMICOLON",
"enumvalue_attribute_name : ENUMLITERAL",
"$$51 :",
"charset_statement : name $$51 charset_definition",
"charset_definition :",
"charset_definition : LBRACE RBRACE",
"charset_definition : LBRACE charset_attribute_list RBRACE",
"$$52 :",
"charset_definition : error $$52 RBRACE",
"charset_attribute_list : charset_attribute",
"charset_attribute_list : charset_attribute_list charset_attribute",
"$$53 :",
"charset_attribute : charset_attribute_name EQUALS STRING $$53 SEMICOLON",
"$$54 :",
"charset_attribute : predefined_charset_attribute_name EQUALS predefined_charset_attribute_value $$54 SEMICOLON",
"$$55 :",
"charset_attribute : error $$55 SEMICOLON",
"charset_attribute_name : INTERNALLITERAL",
"charset_attribute_name : ALIAS",
"charset_attribute_name : XMSTRINGCHARSETNAME",
"predefined_charset_attribute_name : DIRECTION",
"predefined_charset_attribute_name : PARSEDIRECTION",
"predefined_charset_attribute_name : CHARACTERSIZE",
"predefined_charset_attribute_value : LEFTTORIGHT",
"predefined_charset_attribute_value : RIGHTTOLEFT",
"predefined_charset_attribute_value : ONEBYTE",
"predefined_charset_attribute_value : TWOBYTE",
"predefined_charset_attribute_value : MIXED1_2BYTE",
"name : STRING",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 735 "wmlparse.y"

/*
 * Dummmy error routine, since we output our own.
 */
int yyerror (s)
char *s;
{
	return 0;
}


#include "wmllex.c"

#line 788 "wmlparse.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 11:
#line 174 "wmlparse.y"
	{ LexIssueError(0); }
break;
case 16:
#line 190 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 21:
#line 201 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 26:
#line 212 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 31:
#line 223 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 36:
#line 234 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 41:
#line 245 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 46:
#line 256 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 51:
#line 267 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 53:
#line 279 "wmlparse.y"
	{ wmlCreateClass (yynameval, yytknval1); }
break;
case 55:
#line 284 "wmlparse.y"
	{ yytknval1 = METACLASS; }
break;
case 56:
#line 285 "wmlparse.y"
	{ yytknval1 = WIDGET; }
break;
case 57:
#line 286 "wmlparse.y"
	{ yytknval1 = GADGET; }
break;
case 61:
#line 293 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 65:
#line 305 "wmlparse.y"
	{ wmlAddClassAttribute (yytknval1, yystringval); }
break;
case 67:
#line 310 "wmlparse.y"
	{ wmlAddClassAttribute (yytknval1, yytknval2); }
break;
case 72:
#line 315 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 74:
#line 319 "wmlparse.y"
	{ yytknval1 = SUPERCLASS; }
break;
case 75:
#line 320 "wmlparse.y"
	{ yytknval1 = PARENTCLASS; }
break;
case 76:
#line 321 "wmlparse.y"
	{ yytknval1 = INTERNALLITERAL; }
break;
case 77:
#line 322 "wmlparse.y"
	{ yytknval1 = DOCNAME; }
break;
case 78:
#line 323 "wmlparse.y"
	{ yytknval1 = CONVFUNC; }
break;
case 79:
#line 324 "wmlparse.y"
	{ yytknval1 = WIDGETCLASS; }
break;
case 80:
#line 325 "wmlparse.y"
	{ yytknval1 = CTRLMAPSRESOURCE; }
break;
case 81:
#line 326 "wmlparse.y"
	{ yytknval1 = ALIAS; }
break;
case 82:
#line 330 "wmlparse.y"
	{ yytknval1 = DIALOGCLASS; }
break;
case 83:
#line 334 "wmlparse.y"
	{ yytknval2 = ATTRTRUE; }
break;
case 84:
#line 335 "wmlparse.y"
	{ yytknval2 = ATTRFALSE; }
break;
case 89:
#line 346 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 93:
#line 356 "wmlparse.y"
	{ wmlAddClassResource (yynameval); }
break;
case 95:
#line 359 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 100:
#line 366 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 104:
#line 378 "wmlparse.y"
	{ wmlAddClassResourceAttribute (yytknval1, yystringval); }
break;
case 106:
#line 383 "wmlparse.y"
	{ wmlAddClassResourceAttribute (yytknval1, yytknval2); }
break;
case 108:
#line 385 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 110:
#line 389 "wmlparse.y"
	{ yytknval1 = TYPE; }
break;
case 111:
#line 390 "wmlparse.y"
	{ yytknval1 = DEFAULT; }
break;
case 112:
#line 394 "wmlparse.y"
	{ yytknval1 = EXCLUDE; }
break;
case 117:
#line 405 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 121:
#line 415 "wmlparse.y"
	{ wmlAddClassControl (yynameval); }
break;
case 123:
#line 418 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 127:
#line 424 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 133:
#line 435 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 137:
#line 445 "wmlparse.y"
	{ wmlAddClassChild (yynameval); }
break;
case 139:
#line 447 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 141:
#line 459 "wmlparse.y"
	{ wmlCreateResource (yynameval, yytknval1); }
break;
case 143:
#line 464 "wmlparse.y"
	{ yytknval1 = ARGUMENT; }
break;
case 144:
#line 465 "wmlparse.y"
	{ yytknval1 = REASON; }
break;
case 145:
#line 466 "wmlparse.y"
	{ yytknval1 = CONSTRAINT; }
break;
case 146:
#line 467 "wmlparse.y"
	{ yytknval1 = SUBRESOURCE; }
break;
case 150:
#line 474 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 154:
#line 486 "wmlparse.y"
	{ wmlAddResourceAttribute (yytknval1, yystringval); }
break;
case 156:
#line 491 "wmlparse.y"
	{ wmlAddResourceAttribute (yytknval1, yytknval2); }
break;
case 158:
#line 493 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 160:
#line 497 "wmlparse.y"
	{ yytknval1 = TYPE; }
break;
case 161:
#line 498 "wmlparse.y"
	{ yytknval1 = RESOURCELITERAL; }
break;
case 162:
#line 499 "wmlparse.y"
	{ yytknval1 = ENUMERATIONSET; }
break;
case 163:
#line 500 "wmlparse.y"
	{ yytknval1 = INTERNALLITERAL; }
break;
case 164:
#line 501 "wmlparse.y"
	{ yytknval1 = RELATED; }
break;
case 165:
#line 502 "wmlparse.y"
	{ yytknval1 = DOCNAME; }
break;
case 166:
#line 503 "wmlparse.y"
	{ yytknval1 = DEFAULT; }
break;
case 167:
#line 504 "wmlparse.y"
	{ yytknval1 = ALIAS; }
break;
case 168:
#line 508 "wmlparse.y"
	{ yytknval1 = XRMRESOURCE; }
break;
case 169:
#line 517 "wmlparse.y"
	{ wmlCreateChild(yynameval, yystringval); }
break;
case 170:
#line 526 "wmlparse.y"
	{ wmlCreateDatatype (yystringval); }
break;
case 175:
#line 534 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 179:
#line 546 "wmlparse.y"
	{ wmlAddDatatypeAttribute (yytknval1, yystringval); }
break;
case 181:
#line 548 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 183:
#line 552 "wmlparse.y"
	{ yytknval1 = INTERNALLITERAL; }
break;
case 184:
#line 553 "wmlparse.y"
	{ yytknval1 = DOCNAME; }
break;
case 185:
#line 554 "wmlparse.y"
	{ yytknval1 = XRMRESOURCE; }
break;
case 186:
#line 564 "wmlparse.y"
	{ wmlCreateOrAppendCtrlList (yynameval); }
break;
case 191:
#line 572 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 195:
#line 582 "wmlparse.y"
	{ wmlAddCtrlListControl (yynameval); }
break;
case 197:
#line 585 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 201:
#line 591 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 203:
#line 603 "wmlparse.y"
	{ wmlCreateEnumSet (yynameval, yystringval); }
break;
case 209:
#line 616 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 213:
#line 626 "wmlparse.y"
	{ wmlAddEnumSetValue (yynameval); }
break;
case 215:
#line 628 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 217:
#line 639 "wmlparse.y"
	{ wmlCreateEnumValue (yynameval); }
break;
case 222:
#line 647 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 226:
#line 659 "wmlparse.y"
	{ wmlAddEnumValueAttribute (yytknval1, yystringval); }
break;
case 228:
#line 661 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 230:
#line 665 "wmlparse.y"
	{ yytknval1 = ENUMLITERAL; }
break;
case 231:
#line 675 "wmlparse.y"
	{ wmlCreateCharset (yystringval); }
break;
case 236:
#line 683 "wmlparse.y"
	{ LexIssueError(RBRACE); }
break;
case 240:
#line 695 "wmlparse.y"
	{ wmlAddCharsetAttribute (yytknval1, yystringval); }
break;
case 242:
#line 700 "wmlparse.y"
	{ wmlAddCharsetAttribute (yytknval1, yytknval2); }
break;
case 244:
#line 702 "wmlparse.y"
	{ LexIssueError(SEMICOLON); }
break;
case 246:
#line 706 "wmlparse.y"
	{ yytknval1 = INTERNALLITERAL; }
break;
case 247:
#line 707 "wmlparse.y"
	{ yytknval1 = ALIAS; }
break;
case 248:
#line 708 "wmlparse.y"
	{ yytknval1 = XMSTRINGCHARSETNAME; }
break;
case 249:
#line 712 "wmlparse.y"
	{ yytknval1 = DIRECTION; }
break;
case 250:
#line 713 "wmlparse.y"
	{ yytknval1 = PARSEDIRECTION; }
break;
case 251:
#line 714 "wmlparse.y"
	{ yytknval1 = CHARACTERSIZE; }
break;
case 252:
#line 718 "wmlparse.y"
	{ yytknval2 = LEFTTORIGHT; }
break;
case 253:
#line 719 "wmlparse.y"
	{ yytknval2 = RIGHTTOLEFT; }
break;
case 254:
#line 720 "wmlparse.y"
	{ yytknval2 = ONEBYTE; }
break;
case 255:
#line 721 "wmlparse.y"
	{ yytknval2 = TWOBYTE; }
break;
case 256:
#line 722 "wmlparse.y"
	{ yytknval2 = MIXED1_2BYTE; }
break;
case 257:
#line 731 "wmlparse.y"
	{ strcpy (yynameval, (XmConst char *)yystringval); }
break;
#line 1398 "wmlparse.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
