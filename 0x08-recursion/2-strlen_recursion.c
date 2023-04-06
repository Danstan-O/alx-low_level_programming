#include "main.h"

/**
 * _strlen_recursion - counts the length of a string
 * Return: returns the length of the count
 * @s: the parameter input
 */

int _strlen_recursion(char *s)
{
int length = 0;
if (*s != '\0')
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
