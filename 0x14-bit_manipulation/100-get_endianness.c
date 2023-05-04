#include "main.h"
/**
 * get_endianness - this is a function that gets endianness and returns
 * an int based on the value of int result
 *
 * Return: int value endianness
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return ((int)*c);
}
