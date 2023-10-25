#include "lists.h"

/**
 * print_listint_safe - prints all elements of a listint_t list
 * @h: reference cpy of the head node
 *
 * Return: the number of elements in a list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t i;

	i = 0;
	if (!h)
		return (98);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
