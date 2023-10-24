#include "lists.h"

/**
 * listint_len - calculates total of all elements of a listint_t list
 * @h: reference cpy of the head node
 *
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
