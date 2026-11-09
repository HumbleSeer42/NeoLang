#include "neostd.h"

int iswhitespace(char c)
{
    if (c == ' ' || c == '\t' || c == '\r')
    {
        return 1;
    }

    return 0;
}
int isnum(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    
    return 0;
}
int isxnum(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    if (c >= 'a' && c <= 'f')
    {
        return 1;
    }
    if (c >= 'A' && c <= 'F')
    {
        return 1;
    }

    return 0;
}
int isalphalet(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }

    return 0;
}