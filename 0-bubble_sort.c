#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array
 * @size: size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int swap, swapped;

	if (!array || !size)
		return;
	i = 0;
	while (i < (size - 1))
	{
		swapped = 0;
		j = 0;
		while (j < (size - 1 - i))
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				k = 0;
				while (k < size)
				{
					if (k != 0)
						printf(", ");
					printf("%d", array[k]);
					k++;
				}
				printf("\n");
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break;
		i++;
	}
}
