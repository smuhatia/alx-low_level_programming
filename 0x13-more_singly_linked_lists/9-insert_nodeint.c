#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts node at a given position
 * @head: pointer to the head node
 * idx: index to insert node
 * @n: value of the new node
 *
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free (new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
