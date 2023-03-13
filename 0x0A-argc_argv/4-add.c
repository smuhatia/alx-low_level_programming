#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that adds positive numbers
  * @argc: number of arguments passed
  * @argv: vector of pointers to strings passed
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int c;
	for(c = 1; c < argc; c++)
	{
		if(*argv[c] < '0' || * argv[c] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum =sum + atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
