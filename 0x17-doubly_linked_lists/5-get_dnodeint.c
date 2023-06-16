#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head node of the list
 * @index: index of the node to retrive
 *
 * Return: The nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
	}

	return (current);
}
