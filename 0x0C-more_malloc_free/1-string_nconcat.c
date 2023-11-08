#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concantenate 2 strings
 * @s1: first character parameter
 * @s2: second character parameter
 * @n: third int parameter
 * Return:type
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	result = malloc(sizeof(char) * (s1len + n) + 1);
	if (result == NULL)
		return (NULL);

	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[s1len + i] = s2[i];
		result[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[s1len + i] = s2[i];
		result[s1len + i] = '\0';

	}
	return (result);
}
