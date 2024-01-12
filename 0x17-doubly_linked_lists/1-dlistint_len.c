#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked dlistint_t
 * @h: pointer to the head node of a dlistint_t
 *
 * Return: the number of elements in a dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
