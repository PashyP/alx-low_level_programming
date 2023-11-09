#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers with separator
 * @separator: separator
 * @n: the number of integers
 * @...: the integer to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
