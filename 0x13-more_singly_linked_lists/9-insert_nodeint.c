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
	listint_t *node, *tmp, *prev;

	if (!head)
		return (NULL);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	i = 0;
	tmp = *head;
	while (i != idx && tmp)
	{
		i++;
		prev = tmp;
		tmp = tmp->next;
	}
	if (!tmp && i == idx)
	{
		node->n = n;
		prev->next = node;
		node->next = NULL;
		return (*head);
	}
	node->n = n;
	node->next = tmp;
	prev->next = node;

	return (*head);
}
