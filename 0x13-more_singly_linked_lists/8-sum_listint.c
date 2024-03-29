#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data (n) of a listint_t
 * @head: headnode
 *
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *next_node;
	int sum  = 0;

	if (head == NULL)
		return (0);
	next_node = head;

	while (next_node)
	{
		sum = sum + next_node->n;
		next_node = next_node->next;
	}

	return (sum);
}
