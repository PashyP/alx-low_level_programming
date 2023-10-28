#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 *
 * @x: function parameter
 *
 * @y: another function parameter
 *
 * Return: Always -1 or 1 depending on the condition
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
