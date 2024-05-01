#include "sort.h"


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

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);

			}
		}
	}
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
