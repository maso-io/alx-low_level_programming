#include "lists.h"
/**
 * list_len - print number of nodes
 * @h: head node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
