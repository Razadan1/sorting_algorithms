#include "sort.h"

/**
* bubble_sort -  sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: a pointer to the array to be sorted
* @size: the number of elements in the array
* Return: return void(nothing)
*/
void bubble_sort(int *array, size_t size)
{
	size_t j, i = 0;

	if (array == NULL || size == 0)
		return;

	while (i < size - 1)
	{
		while (j < size - i)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

			}
			else if (array[j] == array[j + 1])
				j++;
			j++;
		}
		i++;
	}


	while (j < size)
	{
		printf("%d", array[j]);
		j++;
	}
	printf("\n");
}

/**
* swap - a function to swap elements
* @a: a pointer to the first arguement
* @b: a pointer to the second arguement
* Return: return nothing void
*/
void swap(int  *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
