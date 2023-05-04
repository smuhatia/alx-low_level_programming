#include "main.h"
/**
 * print_binary - function that prints the binary representation of
 * a number
 * @n: the number to be printed
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int val;

	i = 63;
	while (i >= 0)
	{
		val = n >> 1;
		if (val > 1)
		{
			_putchar ('1');
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar((n & 1) + '0');
}
