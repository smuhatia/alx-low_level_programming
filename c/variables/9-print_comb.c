#include <stdio.h>

int main ()
{
	int i;
	for(i = '0'; i <= '9'; i ++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
