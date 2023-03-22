#include <stdio.h>
#include "main.h"
#include <string.h>

void print_rev(char *s)
{
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    putchar('\n');
}

