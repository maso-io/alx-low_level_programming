#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t
 * @head: pointer with the memory address of the head node
 * @n: value of the node
 *
 * Return: pointer to head node with new memory address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	if (!head)
		return (NULL);
	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;

	return (*head);
}
