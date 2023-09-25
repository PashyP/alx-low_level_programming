#include "main.h"

/**
 * _atoi - a function converts a string to an integer
 * @s: string to be converted
 *
 * Return: result of the function
 */

int _atoi(char *s)
{
	unsigned int x = 0;
	int sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			x = (x * 10) + (*s - '0');
		}
		else if (x > 0)
			break;

	} while (*s++);

	return (x * sign);


}
