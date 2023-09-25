#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: the character to be checked
 * Return: will return 1 if c is lowercase otherwise it will return 0
**/

int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
