#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: head of likedlist
 * @index: index to be deleted
 * Description: Deletes node by index
 * Return: 1 success, -1 failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextNode, *current, *previousNode;
	listint_t *node = *head;
	unsigned int count = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		current = *head;
		nextNode = current->next;

		*head = nextNode;

		free(current);
		return (1);
	}
	while (*head)
	{
		count++;
		previousNode = *head;
		current = previousNode->next;

		if (current == NULL)
			return (-1);

		nextNode = current->next;

		if (index == count)
		{
			previousNode->next = nextNode;
			free(current);
			*head = node;
			return (1);
		}
		*head = current;
	}
	return (-1);
}
