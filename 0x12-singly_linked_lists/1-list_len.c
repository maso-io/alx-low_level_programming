#include "lists.h"
/**
 * list_len - returns the number of elements in a list_t list
 * @h: head node
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	if (!h)
		return (0);
	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
