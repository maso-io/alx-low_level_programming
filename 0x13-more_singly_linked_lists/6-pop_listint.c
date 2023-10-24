#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer with an address of the head node
 *
 * Return: the head nodes data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!head)
		return (0);
	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
