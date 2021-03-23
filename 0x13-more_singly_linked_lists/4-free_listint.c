#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer to pointer to list_t
 * Description: free list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
