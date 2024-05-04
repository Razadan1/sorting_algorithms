#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order
* using the selection sort algorithm
* @array: a the pointer to the array to be sorted
* @size: the size of the array
* Return: return void(nothing)
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;


	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		size_t min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
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
