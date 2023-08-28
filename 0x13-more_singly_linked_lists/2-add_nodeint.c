#include "lists.h"
/**
 * add_nodeint - adds a new node at the begining of a listint_t
 * @head: location of pointer to reference node
 * @n: value to add
 *
 * Return: pointer to address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newData;

	newData = (listint_t *)malloc(sizeof(listint_t));
	if (newData == NULL)
		return (NULL);
	newData->n = n;
	newData->next = *head;
	*head = newData;
	return (*head);
}
