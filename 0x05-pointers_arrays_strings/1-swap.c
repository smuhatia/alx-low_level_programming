#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer to be swaped
 * @b: second integer to be swaped with a
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
