#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of a listint_t
 * @head: location of pointer to reference node
 * @n: data to add
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newData, *temp;

	newData = (listint_t *)malloc(sizeof(listint_t));
	if (newData == NULL)
		return (NULL);
	newData->n = n;
	if (*head == NULL)
	{
		*head = newData;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newData;
	return (*head);
}
