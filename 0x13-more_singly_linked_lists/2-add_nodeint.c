#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to a pointer with the address of the address node
 * @n: value of the node
 *
 * Return: address of the head node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
