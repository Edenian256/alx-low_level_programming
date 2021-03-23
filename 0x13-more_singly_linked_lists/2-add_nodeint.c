#include "lists.h"
/**
 * add_nodeint - add node int
 * @head: pointer to pointer to list_t
 * @n: conts char string
 * Description: Add new node at the beginning of a listint_t list
 * Return: Return new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (new_node);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
