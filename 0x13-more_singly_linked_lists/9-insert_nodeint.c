#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: reference to a pointer with the address of the head node
 * @idx: index to insert data at
 * @n: value at the index
 *
 * Return: address of the new node, or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, u_int idx, int n)
{
	u_int i;
	listint_t *node, *tmp;

	if (!head)
		return (NULL);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	i = 0;
	tmp = *head;
	node->n = n;

	if (idx == 0)
	{
		node->next = tmp;
		*head = node;

		return (*head);
	}
	else
	{
		while (i < idx - 1)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				return (NULL);
			i++;
		}
		node->next = tmp->next;
		tmp->next = node;
	}

	return (*head);
}
