#include "main.h"
/**
 * binary_to_unit - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0s and 1s to be converted
 *
 * Return: converted unit or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	i = 0;

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = 2 * num + (b[i] - '0');
		}
		else
		{
			return (0);
		}

		i++;
	}

	return (num);
}
