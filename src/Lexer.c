#include "../include/Lexer.h"


void init_lexer(lexer* __lexer, char* source) {
    __lexer -> source = source;
    __lexer -> currentPos = 0;
    __lexer -> currentChar = source[0];
}


void nextChar(lexer* lexer) {
    lexer -> currentChar = lexer -> source[++lexer -> currentPos];
}


void tokenize(tokenlist_t* tl, lexer* lexer, char* source) {
    unsigned int lineNum = 1;
    unsigned int i = 0;
    unsigned int lexi = 0;

    char lexicalBuffer[256];

    while (1) {
        if (lexer -> source[i] == ' ') {
            nextChar(lexer);
        } else if (lexer -> source[i] == '\n') {
            ++lineNum;
            ++i;
            lexi = 0;
        } else if (lexer -> source[i] == '\0') {
            break;
        } else {
            printf("%c\n", lexer -> source[i]);
        }

        switch (source[i]) {
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                tokenlist_add(create_token(T_CHAR, 0, NULL, lexer -> source[i], lineNum), tl);
        }

        lexi = 0;
        ++i;
    }
}
