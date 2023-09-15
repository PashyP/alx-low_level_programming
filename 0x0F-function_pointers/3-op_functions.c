#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds @a and @b
 *
 * @a: arg 1
 * @b: arg 2
 *
 * Return: result of the function
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts @a and @b
 *
 * @a: arg 1
 * @b: arg 2
 *
 * Return: result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies @a by @b
  * @a: arg 1
  * @b: arg 2
  *
  * Return: result
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 *
 * @a: arg 1
 * @b: arg 2
 *
 * Return: result
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the reminder of the division between @a and @b
 *
 * @a: arg 1
 * @b: arg 2
 *
 * Return: result
*/

int op_mod(int a, int b)
{
	return (a % b);
}
