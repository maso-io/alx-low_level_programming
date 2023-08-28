#include "lists.h"
/**
 * listint_len - counts the number of elements in a listint_t
 * @h: reference head node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
