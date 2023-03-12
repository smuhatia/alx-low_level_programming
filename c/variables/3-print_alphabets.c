#include <stdio.h>

int main ()
{
	char c;
	char C;
	for(c = 'a'; c < 'z'; c++)
	{
		putchar(c);
	}
	for(C = 'A'; C < 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return 0;
}
