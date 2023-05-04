#include "main.h"
/**
 * set_bit - this is a function that sets the value of a bit
 * to 1 at a given index
 * @n: this is a pointer to a value
 * @index: index to set bit
 *
 * Return: i if success or -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
