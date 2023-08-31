#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: location of pointer to ref node
 * @idx: index of where to add new node
 * @n: data at the node
 *
 * Return: address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i;

	i = 0;
	temp = *head;
	if (!head)
		return (NULL);
	while (i < idx)
	{
		if (!(temp->next))
			return (NULL);
		temp = temp->next;
		i++;
	}
	temp->n = n;
	return (temp);
}
