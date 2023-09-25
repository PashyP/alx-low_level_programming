#include "main.h"

/**
 * _strcpy - a function that copies
 * @dest: a parameter in the function
 * @src: another function parameter
 *
 * Return: dest successfully
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
