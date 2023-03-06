#include <stdio.h>

/**
 * main - You can not modify a 
 *
 * Return:always 0
 */
int main (void)
{
	int a[5];
	int b;
	int c[5];

	a = 0; /* nop */
	a = &b; /* nop */
	a = c; /* nop */
	return (0);
}
