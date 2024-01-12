#include "lists.h"
/**
 * add_dnondeint_end - adds a new node at the end of a dlistint_t
 * @head: pointer to the dlistint_t head
 *
 * Return: the address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (!head)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	tmp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
