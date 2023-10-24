#include "lists.h"

/**
 * free_listint - free's a listint_t
 * @head: reference to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
