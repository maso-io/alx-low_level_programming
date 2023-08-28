#ifndef LISTINT_S
#define LISTINT_S

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* writes one character to stdoutput */
int _putchar(char c);

/* prints all elements of listint_t */
size_t print_listint(const listint_t *h);

/* returns the number of elements in a linked listint_t list */
size_t listint_len(const listint_t *h);

/* adds new node at the begining of listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* adds new node at the end of listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* frees a listint list */
void free_listint(listint_t *head);

/* function that frees a listint_t list */
void free_listint2(listint_t **head);

/* deletes the head node and returns the headnodes data */
int pop_listint(listint_t **head);

/* returns the nth node of a linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* returns the sum of all the data (n) of a listint_t linked list */
int sum_listint(listint_t *head);

/* inserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* deletes the node at index of a listint_t linked list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
