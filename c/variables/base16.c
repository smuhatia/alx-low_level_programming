#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 16; i++)
    {
        if (i < 10)
        {
            printf("%d", i);
        }
        else
        {
            printf("%c", 'a' + (i - 10));
        }
    }

    printf("\n");
    return 0;
}
