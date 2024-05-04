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
