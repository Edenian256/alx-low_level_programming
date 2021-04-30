#include "lists.h"
/**
* free_dlistint - free_dlistint
* @head: list to be free
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current)
	{
		dlistint_t *next_node = current->next;

		free(current);
		current = next_node;
	}
}
