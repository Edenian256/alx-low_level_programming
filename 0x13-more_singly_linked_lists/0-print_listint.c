#include "lists.h"
/**
 * print_listint - print list
 * @h: pointer from head list_t
 * Description: This function print list
 * Return: Return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t const *current = h;
	int num_elements = 0;

	if (!current)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num_elements++;
	}
	return (num_elements);
}
