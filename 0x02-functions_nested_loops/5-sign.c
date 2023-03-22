#include "main.h"
/**
 * print_sign - our entry point
 * @n: character
 * Return: 1 is true 0 otherwise
 */
int print_sign(int n)
{
if (n < 0)
{
return (-1);
_putchar('-');
}
else if (n > 0)
{
return (1);
_putchar('+');
}
else
{
return (0);
_putchar(0);
}
}
