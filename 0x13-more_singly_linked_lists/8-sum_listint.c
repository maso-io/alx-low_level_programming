#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a listint_t
 * @head: reference to the head node
 *
 * Return: the sum of all the data in the listint_t list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (!head)
		return (0);
	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
