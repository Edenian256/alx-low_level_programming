#include "lists.h"
/**
 * add_nodeint_end - add node end
 * @head: pointer to pointer to list_t
 * @n: conts char int
 * Description: Add new node at the end of a list_t list
 * Return: Return new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	} else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
