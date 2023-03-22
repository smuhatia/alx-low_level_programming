#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function print name
 * return: returns void
 */

void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
		return;

	f(name);
}
