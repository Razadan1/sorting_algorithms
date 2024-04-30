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
	int temp;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				temp = array[i];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
