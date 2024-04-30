#include "sort.h"
#include <stdio.h>

/**
* bubble_sort - sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: a pointer to the array to be sorted
* @size: the number of elements in the array
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	printf("Original array: ");
	for (i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++) {
            size_t k;

			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);

				printf("After swap: ");
				for (k = 0; k < size; k++) {
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}

	printf("Sorted array: ");
	for (i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

/**
* swap - swaps two integers
* @a: pointer to the first integer
* @b: pointer to the second integer
* Return: void
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
