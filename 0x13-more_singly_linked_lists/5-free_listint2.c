#include "lists.h"

/**
 * free_listint2 - To free a linked list
 * @head: to free the pointer to the listint_t list
 */

void free_listint2(listint_t **head);
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
