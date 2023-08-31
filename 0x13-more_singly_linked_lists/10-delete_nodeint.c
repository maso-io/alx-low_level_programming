#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at the given index in listint_t list
 * @head: location to pointer of reference node
 * @index: index of node to delete
 *
 * Return: 1 (sucess), -1 (otherwise)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *del;

	i = 0;
	del = *head;
	temp = *head;
	if (!head)
		return (-1);
	while (i < index)
	{
		if (!(del->next))
			return (-1);
		if (i < (index - 1))
			temp = temp->next;
		del = del->next;
		i++;
	}
	temp->next = del->next;
	free(del);
	return (1);
}
