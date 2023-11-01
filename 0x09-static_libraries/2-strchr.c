#include "main.h"
#include <stdio.h>


/**
 * *_strchr - a function that locates a character in a string
 * @s: string pointer argument1
 * @c: target character argument2
 * Return: null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);

}
