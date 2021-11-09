#ifndef KESS_LEXER_H_
#define KESS_LEXER_H_

#include <string.h>
#include <stdio.h>
#include "Token.h"


typedef struct Lexer {
    char* source;
    unsigned int currentPos;
    char currentChar;
} lexer;


void tokenize(tokenlist_t* tl, lexer* lexer, char* source);
void init_lexer(lexer* __lexer, char* source);


#endif
