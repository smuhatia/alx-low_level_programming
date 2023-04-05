#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_list
 * @head: the head node
 * @index: index of node to be fetched
 *
 * Return: node at index n or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	tmp = head;

	count = 0;
	while (tmp)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
