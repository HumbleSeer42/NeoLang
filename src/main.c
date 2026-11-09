#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#include "lexer.h"

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf(C_RED"neolang: fatal error: no file to run\n"C_RESET);
        return 1;
    }

    TokenList tokens;
    tokens.count = 0;
    tokens.tokens = malloc(sizeof(Token));

    int lex_success = lexer_lex(argv[1], &tokens);
    if (lex_success != 0)
    {
        return lex_success;
    }

    for (int i = 0; i < tokens.count; i++)
    {
        printf("Token #%d: %s | %d\n", i, tokens.tokens[i].lexeme, tokens.tokens[i].type);
    }

    return 0;
}
