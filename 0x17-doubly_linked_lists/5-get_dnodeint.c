#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of pointer to return
 *
 * Return: returns pointer to the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	u_int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	if (!head)
		return (NULL);

	return (head);
}
