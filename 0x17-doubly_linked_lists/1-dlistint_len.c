#include "lists.h"
/**
* dlistint_len - print_dlistint
* @h: pointer
* Return: count of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t const *current = h;

	if (!current)
	{
		return (count);
	}
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
