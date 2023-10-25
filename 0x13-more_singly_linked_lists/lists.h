#ifndef _LISTS_H_
#define _LISTS_H_

/* malloc */
#include <stdlib.h>
/* printf i/o */
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;

/* prints all elements of a listint_t list */
size_t print_listint(const listint_t *h);
/* returns the number of elements in a linked list */
size_t listint_len(const listint_t *h);
/* add new node at the beginning of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);
/* adds new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* frees a listint_t linked list */
void free_listint(listint_t *head);
/* function that frees a listint_t and set head to null */
void free_listint2(listint_t **head);
/* deletes node of a listint_t, and returns the node data */
int pop_listint(listint_t **head);
/* returns the nth node of a listint_t */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* returns the sum of all data of a listint_t */
int sum_listint(listint_t *head);
/* inserts new nocde at given indx */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* deletes indx of a listint_t */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/* safe version of print */
size_t print_listint_safe(const listint_t *head);
#endif /* end list_int */
