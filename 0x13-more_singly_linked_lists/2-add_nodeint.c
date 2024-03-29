#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beggining of listint list
 * @head: pointer to head node
 * @n: int value to be stored
 *
 * Return: pointer to the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
