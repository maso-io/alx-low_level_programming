#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: reference to the head node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
