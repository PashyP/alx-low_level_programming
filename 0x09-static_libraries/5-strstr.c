#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strstr - a function that locates a substring
 * @haystack: a pointer to the input string
 * @needle: pointer to the substring
 *
 * Return: null.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;

	}
	return (NULL);

}
