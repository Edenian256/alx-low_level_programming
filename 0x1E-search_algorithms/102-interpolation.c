#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: first index where value is located, else NULL if value not found or
 *         array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, hi = size - 1;

	if (array == NULL)
		return (-1);

	while (array[low] <= value && array[hi] >= value && low <= hi)
	{
		pos = low + (((double)(hi - low) / (array[hi] - array[low])) *
			     (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			hi = pos - 1;
		else
			return (pos);
	}

	pos = low + (((double)(hi - low) / (array[hi] - array[low])) *
		     (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
