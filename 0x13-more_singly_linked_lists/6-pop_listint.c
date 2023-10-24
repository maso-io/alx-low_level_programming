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
	listint_t *next_node;

	if (!head)
		return (0);
	if (!*head)
		return (0);
	next_node = (*head)->next;
	data = tmp->n;
	free(*head);
	*head = next_node;

	return (data);
}
