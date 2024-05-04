#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of
 * integers in the ascending order
 *
 * @list: A pointer to the head of the doubly linked list
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
void insertion_sort_list(listint_t **list)
{
	/* Declare pointers for traversal and temporary storage */
	listint_t *node, *tmp, *next, *tmp_next, *tmp_prev;
	int i = 0;

	/* Check if the list is empty or contains only one node */
	if (list == NULL || (*list)->next == NULL)
		return;

    /* Start sorting from the second node */
    node = *list;
    node = node->next;

    /* Traverse the list */
    while (node != NULL)
    {
        /* Store current node and its neighbours */
	    tmp = node;
	    next = node->next;
	    tmp_next = tmp->next; /* Make NULL for the last node */
	    tmp_prev = tmp->prev;

        /* Move the current node backwards while its previous node's value is greater */
	    while (tmp->prev != NULL && tmp_prev->n > tmp->n)
	    {
            /* Adjust pointers to maintain the integrity of the list */
		    if (tmp_next != NULL)
			    tmp_next->prev = tmp_prev;
		    tmp_prev->next = tmp_next;

            /* Handle cases where the previous node is the head of the list */
			void nodes_conditions();
            /* Adjust temporary pointers for the next iteration */
		    tmp->next = tmp_prev;
		    tmp_prev = tmp->prev;
		    tmp_next = tmp->next;
            /* Print the current state of the list for debugging purpose */
		    print_list(*list);
	    }

        /* Move to the next node */
	    node = next;
	    i++;
    }
}

/**
 * nodes_conditions - These are the conditions while tmp-> prev is null
 * and is greater than tmp -> tmp-> n
 * Return: return void
*/
void nodes_conditions()
{
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
}