#include "sort.h"
#include <stdio.h>

/**
* swap - swaps two integers
* @a: pointer to the first integer
* @b: pointer to the second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
* lomuto_partition - partitions the array for quicksort
* @array: array to be partitioned
* @low: low index of the array segment
* @high: ending index of the partition
* @size: size of the array
* Return: index of the pivot element
*/
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];

	size_t i = low - 1;
	size_t j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}

/**
* quicksort - sorts an array using the quicksort algorithm
* @array: array to be sorted
* @low: starting index of the array
* @high: ending index of the array
* @size: size of the array
*/
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	if (low < high)
	{
		size_t part = lomuto_partition(array, low, high, size);

		quicksort(array, low, part - 1, size);
		quicksort(array, part + 1, high, size);
	}
}

/**
* quick_sort - sorts an array of integers in ascending order using quicksort
* @array: array to be sorted
* @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	print_array(array, size);
	quicksort(array, 0, size - 1, size);
}
