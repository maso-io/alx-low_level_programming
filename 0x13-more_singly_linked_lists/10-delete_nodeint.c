#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index on a listint_t
 * @head: reference to a pointer with the address of the head node
 * @index: index to delete node at
 *
 * Return: 1 if succeeded, else -1
 */
int delete_nodeint_at_index(listint_t **head, u_int index)
{
	u_int i;
	listint_t *tmp, *prev;

	if (!head)
		return (-1);
	i = 0;
	tmp = *head;
	while (tmp && index != i)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (-1);
	if (i == index && i == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	if (i == index && i != 0)
		prev->next = tmp->next;
	free(tmp);
	tmp = NULL;

	return (1);
}
