#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: string to be used
 * Return: always 0;
 */

int main(int argc, char **argv)
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
