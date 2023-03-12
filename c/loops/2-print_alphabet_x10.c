#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	int i;
	int j = 0;
	while(j < 10)
	{
		for(i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		j++;
		putchar('\n');
	}
}

