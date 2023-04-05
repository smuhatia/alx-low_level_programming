#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to head node
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *a;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	a = *head;

	while (a)
	{
		next_node = a;
		free(a);
		a = next_node;
	}

	*head = NULL;
}
