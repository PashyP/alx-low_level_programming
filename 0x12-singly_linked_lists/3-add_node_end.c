#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int n = 0;

	while (s[n])
		n++;

	return (n);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
