#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given index
 * @h: pointer to the head node of a dlistint_t
 * @idx: index to insert node at
 * @n: data to assign to the node
 *
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new_node;

	if (!h)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	head = *h;
	new_node->n = n;

	for (; idx != 1; idx--)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->prev = head;
	new_node->next = head->next;
	head->next->prev = new_node;
	head->next = new_node;

	return (new_node);
}
