#include "lists.h"
/**
 * pop_listint - pop list int
 * @head: pointer from head listint
 * Description: This function pop head from  list
 * Return: Return n
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		current = *head;
		n = current->n;
		*head = current->next;
		free(current);
	}

	return (n);
}
