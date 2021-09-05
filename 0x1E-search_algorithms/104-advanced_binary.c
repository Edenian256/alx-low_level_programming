#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * binary_recurse - recursive function implementing binary search
 * @array: pointer to first element of the array to search in
 * @left: lefter boundary of search space to look in
 * @right: upper boundary of search space to look in
 * @res: stores current result, could be -1 if match hasn't been found yet
 * @value: value to search for in the array
 *
 * Return: index where value is located, else -1
 */
int binary_recurse(int *array, size_t left, size_t right, int res, int value)
{
	size_t idx = 0;
	int mid = 0;

	if (left <= right)
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
		{
			left = mid + 1;
			return (binary_recurse(array, left, right, res, value));
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
			return (binary_recurse(array, left, right, res, value));
		}
		else
		{
			res = mid;
			right = mid - 1;
			return (binary_recurse(array, left, right, res, value));
		}
	}

	return (res);
}

/**
 * advanced_binary - searches for value in a sorted array of integers using the
 *                   Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	/*
	 * res stores current result to be passed recursively
	 * allows us to keep searching for left-most matching value to find
	 * first occurence of value
	 */
	int res = -1;

	if (array == NULL)
		return (-1);
	else
		return (binary_recurse(array, left, right, res, value));
}
