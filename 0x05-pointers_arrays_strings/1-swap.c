#include "holberton.h"

/**
 * swap_int - main
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int a1;

	a1 = *a;
	*a = *b;
	*b = a1;
}
