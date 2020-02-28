#ifndef pulse_scanner_h
#define pulse_scanner_h

typedef enum {
  // Single-character tokens.
  TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
  TOKEN_LEFT_BRACE, TOKEN_RIGHT_BRACE,
  TOKEN_INDENT, TOKEN_UNINDENT, TOKEN_BEGIN_BLOCK,
  TOKEN_COMMA, TOKEN_DOT, TOKEN_MODULO,
  TOKEN_MINUS, TOKEN_NEWLINE, TOKEN_POWER,
  TOKEN_PLUS, TOKEN_SLASH, TOKEN_STAR, //15

  // One or two character tokens.
  TOKEN_BANG, TOKEN_BANG_EQUAL,
  TOKEN_EQUAL, TOKEN_EQUAL_EQUAL,
  TOKEN_GREATER, TOKEN_GREATER_EQUAL,
  TOKEN_LESS, TOKEN_LESS_EQUAL, //23

  // Literals.
  TOKEN_IDENTIFIER, TOKEN_STRING, TOKEN_NUMBER, //26

  // Keywords.
  TOKEN_AND, TOKEN_CLASS, TOKEN_DEF, TOKEN_ELSE, TOKEN_FALSE,
  TOKEN_FOR, TOKEN_FUN, TOKEN_IF, TOKEN_NIL, TOKEN_OR,
  TOKEN_PRINT, TOKEN_RETURN, TOKEN_SUPER, TOKEN_THIS,
  TOKEN_TRUE, TOKEN_VAR, TOKEN_WHILE,

  TOKEN_ERROR,
  TOKEN_EOF   //45
} TokenType;

typedef struct {
  TokenType type;
  const char* start;
  int length;
  int line;
} Token;

typedef struct {
  const char* start;
  const char* current;
  int line;
  int indentLevel;
  bool isIndent;
  bool isUnindent;
  int unindentLevel;
} Scanner;

void initScanner(Scanner* scanner, const char* source);
Token scanToken(Scanner* scanner);

#endif
