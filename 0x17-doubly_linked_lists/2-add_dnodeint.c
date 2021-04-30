#include "lists.h"
/**
 * add_dnodeint - add_dnodeint
 * @head: dpuble pointer to list
 * @n: int value
 * Description: This function add node at the beginning
 * Return: head or null if it fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
