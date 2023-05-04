#include "main.h"
/**
 * get_bit - this is a function that returns the value of a bit
 * at a given index
 * @n: This is the value to check for index
 * @index: this is the index of the bit to be accessed
 *
 * Return: the value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
