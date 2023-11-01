#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the input string
 * @accept: pointer to the accept string
 *
 * Return: null.
 */



char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}

	return (NULL);

}
