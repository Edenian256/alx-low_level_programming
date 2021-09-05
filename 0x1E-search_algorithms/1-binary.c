#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for value in a sorted array of integers using the
 *                 Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, idx = 0;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);
			if (idx != right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
