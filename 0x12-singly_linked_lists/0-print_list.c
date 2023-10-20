#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elemnts of a list_t list
 * @h: pointer to head node
 *
 * Return: the number of hs
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (!h)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (h)
		{
			if (h->str)
				printf("[%u] %s\n", h->len, h->str);
			else
				printf("[%u] (nil)\n", 0);
			h = h->next;
			i++;
		}
	}
	return (i);
}
