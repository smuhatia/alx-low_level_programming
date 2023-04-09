#include "main.h"
/**
 * get_endianness - its a function gets endianness and returns
 * an int based on the int value result
 * return: int value (endianness)
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
