#include "lists.h"
/**
 * sum_listint - sum's all data in a listint_t linked list
 * @head: reference node
 *
 * Return: sum of data (sucess), 0 (otherwise)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

