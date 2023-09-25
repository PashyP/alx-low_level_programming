#include "main.h"

/**
 * _isalpha - a function that checks for lowercase character
 * @c: the character to be checked
 * Return: will return 1 if c i alphabetic  otherwise it will return 0
**/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
