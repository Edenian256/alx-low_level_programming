#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: pointer from head listint
 * @index: int index
 * Description: This function find index into list
 * Return: Return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	listint_t *temp;
	unsigned int cont = 0;

	while (curr)
	{
		if (cont == index)
		{
			temp = curr;
			return	(temp);
		}
		curr = curr->next;
		cont++;
	}
	return (NULL);
}
