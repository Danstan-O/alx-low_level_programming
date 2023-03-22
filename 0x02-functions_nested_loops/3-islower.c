#include "main.h"
/**
 * _islower - our entry point
 * @c: character
 * Return: 1 is true 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
