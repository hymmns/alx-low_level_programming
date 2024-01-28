#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_of_data = 0;

	while (head != NULL)
	{
		sum_of_data = sum_of_data + head->n;
		head = head->next;
	}

	return (sum_of_data);
}
