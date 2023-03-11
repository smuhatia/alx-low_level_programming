#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints its name
* @argc: array count
* @argv: array containing elements
*
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
