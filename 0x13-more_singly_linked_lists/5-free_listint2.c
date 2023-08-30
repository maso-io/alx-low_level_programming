#include "lists.h"
/**
 * free_listint2 - frees memory allocated to a listint_t and set head to null
 * @head: pointer to reference node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
