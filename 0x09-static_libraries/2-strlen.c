#include "main.h"

/**
  * _strlen -  function that returns the length of the string;
  *
  * @s: the array to be checked
  *
  * Return: length of the string
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);

}
