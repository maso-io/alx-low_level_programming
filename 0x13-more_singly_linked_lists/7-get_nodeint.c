#include "lists.h"
/**
 * get_nodeint_at_index - retrieves the nth node of a listint_t linked list
 * @head: pointer to the reference node
 * @index: index of the node
 *
 * Return: pointer to the nth node (sucess), NULL (otherwise)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n;

	n = 0;
	temp = head;
	if (!head)
		return (NULL);
	while (n < index)
	{
		if (!(temp->next))
			return (NULL);
		temp = temp->next;
		n++;
	}
	return (temp);
}
