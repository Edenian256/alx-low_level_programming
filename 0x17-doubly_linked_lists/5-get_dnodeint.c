#include "lists.h"
/**
 * get_dnodeint_at_index - get_dnodeint_at_index
 * @head: pointer to dlistint_t
 * @index: index to find
 * Return: return node ton find by index or NULL it not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		if (counter == index)
			break;
		current_node = current_node->next;
		counter++;
	}

	return (current_node);
}
