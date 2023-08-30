#include "lists.h"
/**
 * pop_listint - deletes the head of a listint_t linked list
 * @head: pointer to location of the reference node
 *
 * Return: data at the deleted node
 */
int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	return (data);
}
