#include <stdio.h>

/**
i* print_school - prints "Holberton"
 *
 *Return: nothing
 */
void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	str[3] = 't';
	printf("%s\n", str);
}
/**
 * main
 *
 *Return: 0
 */
int main(void)
{
	print_school();
	return (0);
}
