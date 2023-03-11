#include <stdio.h>
/**
 *main - print out the string in new line
 *@argc:count arguments 
 *@argv:List arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
return (0);
}
