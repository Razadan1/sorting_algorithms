#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;

	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void shift_nodes(listint_t **list, listint_t *tmp, listint_t *tmp_next,
listint_t *tmp_prev);

void quick_sort(int *array, size_t size);
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size);
void quick_sorting(int *array, size_t size, ssize_t small, ssize_t large);

#endif /* MAIN_H */
