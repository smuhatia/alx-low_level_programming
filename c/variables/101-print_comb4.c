#include <stdio.h>

int main()
{
	int i;
	int j;
	int k;
	for(i = 0; i < 9; i++)
	{
		for(j = i +1; j < 10; j++)
		{
			for(k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				if (i == 8 && j == 9 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return 0;
}
