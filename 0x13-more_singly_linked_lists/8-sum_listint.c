#include "lists.h"
/**
 * sum_listint - sum list
 * @head: pointer from head listint
 * Description: This function adds nums
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
