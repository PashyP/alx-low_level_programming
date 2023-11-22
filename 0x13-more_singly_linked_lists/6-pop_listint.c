#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;


	if (*head == NULL)
	{
		return (0);
	}

	current = *head;
	n = current->n;
	*head = (*head)->next;
	free(current);
	return (n);

}
