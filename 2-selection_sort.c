#include "sort.h"
/**
 * idx_min_nbr - return the index of min number
 * @arr : array
 * @i: start
 * @size: size of array
 * Return: idex
 */
int idx_min_nbr(int *arr, int i, int size)
{
	int min, idx;

	idx = i;
	min = arr[i];
	while (i < size)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			idx = i;
		}
		i++;
	}
	return (idx);
}
/**
 * swap - swap two nubers
 * @a: nbr1
 * @b: nbr2
 */
void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
/**
 * selection_sort - selection sort array
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		j = idx_min_nbr(array, i, size);
		if (i != j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
		i++;
	}
}
