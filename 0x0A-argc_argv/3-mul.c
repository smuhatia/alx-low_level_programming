#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply elements
 *@argc: argumment count
 *@argv: number of elements to be multiplied
 *Return: Always 0
 */
int main(int argc, char *argv[])

{
	int a;
	int b;
	if (argc == 3)

	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error\n");
	return (1);
}
