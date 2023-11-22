#include "lists.h"

/**
 * add_nodeint - function to add a new node at the beginning
 * @head: pointer to the head
 * @n: second parameter
 *
 * Return: newnode
 *
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
