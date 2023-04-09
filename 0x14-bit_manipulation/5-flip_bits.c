#include "main.h"
/**
 * flip_bits - function that returns the number of bitsneeded to flip
 * to get from one number to another
 * @n: first number
 * @m: Second number
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value;
	unsigned int bit_count = 0;

	xor_value = n ^ m;

	while (xor_value != 0)
	{
		bit_count += xor_value & 1;
		xor_value >>= 1;
	}
	return (bit_count);
}
