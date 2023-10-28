#include "main.h"
#include <stdio.h>

#include "main.h"
#include <stdio.h>

/**
 * check - checks for natural square root
 *
 * @x: first function parameter
 *
 * @y: second function parameter
 *
 * Return: itself
 */

int check(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}

	if (x * x > y)
	{
		return (-1);
	}

	return (check(x + 1, y));

}



/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: function parameter
 *
 * Return: check function
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}
