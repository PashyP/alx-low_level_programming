#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
