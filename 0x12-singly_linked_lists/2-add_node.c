#include "lists.h"
/**
 * add_node - adds node to the begining of list
 * @head: head node
 * @str: string to add
 *
 * Return: pointer to the newly allocated head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newData;

	newData = (list_t *)malloc(sizeof(list_t));
	if (newData == NULL)
		return (NULL);
	newData->str = strdup(str);
	if (newData->str == NULL)
	{
		free(newData);
		return (NULL);
	}
	newData->len = strlen(str);
	newData->next = *(head);
	*head = newData;
	return (*head);
}
