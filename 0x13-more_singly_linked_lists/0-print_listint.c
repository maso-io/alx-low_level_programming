#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: reference cpy of the head node
 *
 * Return: the number of elements in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
