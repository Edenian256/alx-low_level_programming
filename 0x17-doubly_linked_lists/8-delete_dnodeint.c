#include "lists.h"
/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: doubly pointer of type dlistint_t
 * @index: index to delete
 * Return: 1 if delete node or -1 if index fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current_node = *head;
	dlistint_t *next_node = NULL;
	dlistint_t *node_to_delete = NULL;

	while (current_node != NULL)
	{
		if (index == 0)
		{
			node_to_delete = current_node;
			next_node = current_node->next;
			if (next_node != NULL)
				next_node->prev = NULL;
			*head = next_node;
			free(node_to_delete);
			return (1);
		}

		if (counter == index)
		{
			dlistint_t *aux_node = NULL;

			node_to_delete = current_node;
			next_node = current_node->next;
			aux_node = current_node->prev;
			if (next_node != NULL)
				next_node->prev = aux_node;

			aux_node->next = next_node;
			current_node = next_node;
			free(node_to_delete);
			return (1);
		}
		current_node = current_node->next;
		counter++;
	}
	return (-1);
}
