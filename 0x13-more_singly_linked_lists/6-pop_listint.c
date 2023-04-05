#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: the head node data (n)
 */
int pop_listint(listint_t **head)
{
	int digit;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (0);
	digit = (*head)->n;
	*head = (*head)->next;
	tmp->next = NULL;
	free(tmp);

	return (digit);
}
