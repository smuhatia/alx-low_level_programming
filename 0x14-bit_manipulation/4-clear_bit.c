#include "main.h"
/**
 * clear_bit - this is a function that sets the value of a bit
 * to 0 at a given index
 * @n: this is a pointer to value in memory
 * @index: index to set bit
 *
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
