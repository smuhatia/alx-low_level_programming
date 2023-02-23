#include <stdio.h>

/**
* main - causes an infinite loop and to fix the infite loop in the while loop we increment i by adding "i++;"
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
putchar(i); i++;
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
