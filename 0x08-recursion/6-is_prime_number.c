#include "main.h"
#include <stdio.h>

/**
 * check - checks to see if number is a prime
 *
 * @x: function parameter
 *
 * @y: another function  parameter
 *
 * Return: itself
 */

int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}



/**
 * is_prime_number - checks for a prime number
 *
 * @n: function parameter
 *
 * Return: check function.
 */

int is_prime_number(int n)
{
	if (n ==  2)
	{
		return (1);
	}

	return (check(2, n));
}
