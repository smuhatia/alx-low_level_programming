#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of itself
 * @argc: count of array
 * @argv: array value of argc
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return 0;
}	
