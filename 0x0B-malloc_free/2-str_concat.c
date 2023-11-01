#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * str_concat - concatenates two strings.
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc((strlen(s1) + strlen(s2)) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);

}
