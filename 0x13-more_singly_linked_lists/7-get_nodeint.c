#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node in a listint_t list
 * @head: reference to the head node
 * @index: nth index
 *
 * Return: pointer to the nth node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, u_int index)
{
	u_int i;

	if (!head)
		return (NULL);
	i = 0;
	while (i != index && head)
	{
		head = head->next;
		i++;
	}
	if (!head)
		return (NULL);

	return (head);
}
