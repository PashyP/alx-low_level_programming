#include "main.h"

/**
 * *_memcpy -  copies memory area
 * @dest: pointer destination first argument
 * @src: pointer source second argument
 * @n: integer argument3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
