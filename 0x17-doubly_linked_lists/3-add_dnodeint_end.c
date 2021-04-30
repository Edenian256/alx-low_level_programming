#include "lists.h"
/**
* add_dnodeint_end - add_dnodeint_end
* @head: Doubly pointer to dlistint_t
* @n: int variable type
* Description: This function append new node at the end
* Return: pointer to head or NULL if it fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (current != NULL)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	new_node->prev = current;
	current->next = new_node;
	return (*head);
}
