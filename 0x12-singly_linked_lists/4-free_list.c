#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: reference node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
