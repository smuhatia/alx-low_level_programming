#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of listint_t
 * list
 * @h: pointer to listint_t list
 *
 * Return:  returns number of nodes in the listint
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}

	return (n);
}
