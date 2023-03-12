#include <stdio.h>
#include "main.h"

void ot10(void)
{
	int i;
	int j = 0;
	while(j < 10)
	{
		for(i = 0; i <= 10; i++)
		{
			putchar(i);
		}
		j++;
		putchar('\n');
	}
}
