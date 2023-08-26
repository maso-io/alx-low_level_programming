#include "lists.h"
/**
 * print_list - prints all elements of a list_t
 * @h: head of a linked list
 *
 * Return: the length of the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
