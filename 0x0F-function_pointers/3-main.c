#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: zero for success
  */

int main(int argc, char *argv[])
{
	int x, y;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	operator = argv[2];


	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*operator == 47 || *operator == 37) && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(x, y));

	return (0);
}
