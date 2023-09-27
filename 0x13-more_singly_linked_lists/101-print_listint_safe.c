#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: number of nodes in a loop
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *len = NULL;
	size_t count = 0;
	size_t new_node;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		len = head;
		new_node = 0;
		while (new_node < count)
		{
			if (temp == len)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			len = len->next;
			new_node++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
