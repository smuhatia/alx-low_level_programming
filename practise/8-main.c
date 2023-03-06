#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = '1';
}
/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main (void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modif_my_char_var(p, c);
	printf("Value of 'c': %s\n", p);
	printf("Address of 'c': %p\n", &c);
	return 0;
}
