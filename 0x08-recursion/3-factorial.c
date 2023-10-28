#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a given number
 *
 * @n: function parameter
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		x = n * factorial(n - 1);
	}

	return (x);
}
