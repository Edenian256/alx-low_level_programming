#include "lists.h"
/**
* print_dlistint - print_dlistint
* @h: pointer
* Return: count of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t const *current = h;

	if (!current)
	{
		return (count);
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
