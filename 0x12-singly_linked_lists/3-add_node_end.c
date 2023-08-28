#include "lists.h"
/**
 * add_node_end - add node at the end of a list node
 * @head: first/reference node in the list node
 * @str: string data to add
 *
 * Return: pointer to the reference list with the new element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newData, *temp;

	newData = (list_t *)malloc(sizeof(list_t));
	if (newData == NULL)
		return (NULL);
	newData->str = strdup(str);
	if (newData->str == NULL)
		return (NULL);
	newData->len = strlen(str);
	newData->next = NULL;
	if (*head == NULL)
	{
		*head = newData;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newData;
	return (*head);
}
