#include "main.h"
/**
 * _isalpha - our entry point
 * @c: character
 * Return: 1 is true 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
