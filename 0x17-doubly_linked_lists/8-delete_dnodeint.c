#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: pointer to memory allocated for head node
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	u_int node;
	dlistint_t *h;

	if (head == NULL)
		return (-1);
	node = index;
	h = *head;
	while (index-- && h)
		h = h->next;
	if (!h)
		return (-1);
	if (node != 0)
	{
		h->prev->next = h->next;
		h->next->prev = h->prev;
	}
	else
	{
		if (h->next != NULL)
		{
			*head = h->next;
			free(h);
		}
		else
			if (h)
				free(h);
		(*head)->prev = NULL;
	}

	return (1);
}
