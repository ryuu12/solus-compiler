#ifndef TAC_TOKEN_H
#define TAC_TOKEN_H
typedef struct TOKEN_STRUCT
{
    char* value;
    enum
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_COLON,
        TOKEN_COMMA,
        TOKEN_LT,
        TOKEN_GT,
        TOKEN_RIGHT_ARROW,
        TOKEN_INT
    }type;
} token_T;
#endif