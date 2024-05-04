#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void shift_nodes(listint_t **list, listint_t *tmp, listint_t *tmp_next,
listint_t *tmp_prev);
/**
* insertion_sort_list - Sorts a doubly linked list of integers in asc order
* @list: A pointer to the head of the doubly linked list
*
* Description: This function implements the insertion sort algorithm to sort
* a doubly linked list of integers in ascending order.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *node, *tmp, *next, *tmp_next, *tmp_prev;

if (list == NULL || (*list)->next == NULL)
	return;

node = *list;
node = node->next;

while (node != NULL)
{
	tmp = node;
	next = node->next;
	tmp_next = tmp->next;
	tmp_prev = tmp->prev;
	shift_nodes(list, tmp, tmp_next, tmp_prev);
	node = next;
}
}

/**
* shift_nodes - Shifts nodes in a doubly linked list to sort them in asc order
* @list: A pointer to the head of the doubly linked list
* @tmp: The current node being sorted
* @tmp_next: The next node after the current node
* @tmp_prev: The previous node before the current node
*/
void shift_nodes(listint_t **list, listint_t *tmp, listint_t *tmp_next,
listint_t *tmp_prev)
{
while (tmp->prev != NULL && tmp_prev->n > tmp->n)
{
	if (tmp_next != NULL)
		tmp_next->prev = tmp_prev;
	tmp_prev->next = tmp_next;

	if (tmp_prev->prev == NULL)
	{
		tmp_prev->prev = tmp;
		*list = tmp;
		tmp->prev = NULL;
	}
	else
	{
		tmp->prev = tmp_prev->prev;
		tmp_prev->prev->next = tmp;
		tmp_prev->prev = tmp;
	}

	tmp->next = tmp_prev;
	tmp_prev = tmp->prev;
	tmp_next = tmp->next;

	print_list(*list);
}
}
