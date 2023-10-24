#include "lists.h"
/**
 * free_listint2 - frees a listint2
 * @head: pointer to reference with a memory address with the pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *tmp;

	if (!head)
		return;
	h = *head;
	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
