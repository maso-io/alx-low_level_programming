#include "lists.h"
/**
 * free_dlistint - frees memory allocated for a dlistint_t
 * @head: pointer to head node of a dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h, *tmp;

	h = head;
	if (!head)
		return;
	/* free going backward */
	while (h->prev)
	{
		tmp = h;
		h = h->prev;
		free(tmp);
	}
	/* free going forward */
	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
