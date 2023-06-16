#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to the address of the head node.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to insert at the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current, *new_node;
    unsigned int count;

    new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
    }
    else
    {
        current = *h;
        count = 0;

        while (current != NULL && count < idx - 1)
        {
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            free(new_node);
            return (NULL);
        }

        new_node->next = current->next;
        new_node->prev = current;
        if (current->next != NULL)
            current->next->prev = new_node;
        current->next = new_node;
    }

    return (new_node);
}
