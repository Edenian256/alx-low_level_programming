#include "lists.h"
/**
 * listint_len - listtin_len
 * @h: pointer from head listin_len
 * Description: This function calculate len
 * Return: Return len of listin_len
 */
size_t listint_len(const listint_t *h)
{
	listint_t const *current = h;
	size_t num_elements = 0;

	if (!current)
		return (0);
	while (current != NULL)
	{
		num_elements++;
		current = current->next;
	}
	return (num_elements);
}
