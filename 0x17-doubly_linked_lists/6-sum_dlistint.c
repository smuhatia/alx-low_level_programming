#include "lists.h"
/**
 * sum_dlistint - Returns the summ of all the data (n) in a doubly linked list
 * @head: pointer to the head node of a list
 *
 * Return: The sum of all the data values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
