#include "sort.h"

void swap(int *a, int *b);
int lomuto_partition(int *array, int small, int large);
/**
 * quick_sort - sorts an array of integers in asc order
 * @array: pointer of array to be sorted
 * @size: the size of the array
 * Return: return void(nothing)
*/
void quick_sort(int *array, size_t size)
{
	if (small < large)
	{
		int pi = lomuto_partition(array, size, small, large);

		quick_sort(array, pi);
		quick_sort(array + pi + 1, size - pi - 1);
	}
}

/**
 * lomuto_partition - for partitioning the array
 * @array: pointer to the pointer to be sorted
 * @small: the small number or element
 * @large: the large number or element
 * Return: return an integer
*/
int lomuto_partition(int *array, int small, int large)
{
	int pivot = array[large];
	int j;
	int i = small - 1;

	for (j = small; j < large; j++)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i + 1], &array[large]);
	print_array(array, size);
	return (i + 1);
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
