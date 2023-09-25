#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * argstostr - concatenates all arguments on the command line
 *
 * @ac: number of arguments parameter
 *
 * @av: total array of string arguments
 *
 * Return: null
 */

char *argstostr(int ac, char **av)
{

int i;
int current_position;
int total_length;
char *result;

if (ac == 0 || av == NULL)
{
return (NULL);
}

total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}

result = (char *)malloc((total_length + 1) * sizeof(char));

if (result == NULL)
{
return (NULL);
}

current_position = 0;

for (i = 0; i < ac; i++)
{
strcpy(result + current_position, av[i]);
current_position += strlen(av[i]);
result[current_position] = '\n';
current_position++;
}

result[current_position] = '\0';

return (result);
}
