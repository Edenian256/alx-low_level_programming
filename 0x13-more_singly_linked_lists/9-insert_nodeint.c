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
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: pointer from head listint
 * @idx: int index
 * @n: int number
 * Description: This function insert node in idx position
 * Return: Return node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t *new;
	unsigned int cont = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	while (curr)
	{
		if (cont == (idx - 1))
		{
			new->n = n;
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		cont++;
	}

	return (NULL);
}
