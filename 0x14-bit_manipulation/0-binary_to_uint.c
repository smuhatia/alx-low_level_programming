iinclude "main.h"
/**
 * binary_to_uint- this is a function that converts a binary number 
 * to become an unsigned integer
 * @b: this is a pointer to a string containing 0s and 1s
 *
 * Return: converted unit or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			n = 2 * n + (b[i] - '0');
		else
			return (0);
	i++;
	}
	return (n);
}
