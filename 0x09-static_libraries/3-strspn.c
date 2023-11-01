#include "main.h"
#include <stdio.h>
#include <string.h>



/**
 * _strspn - function that finds length of prefix
 * @s: pointer of input string argument1
 * @accept: pointer to accept string
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s && strchr(accept, *s))
	{
		length++;
		s++;
	}

	return (length);

}
