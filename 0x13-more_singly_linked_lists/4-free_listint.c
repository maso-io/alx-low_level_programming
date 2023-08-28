#include "lists.h"
/**
 * free_listint - frees memory allocated to a listint_t
 * @head: pointer to reference node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
	listint_t *temp;

	temp = head;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
	}
}
