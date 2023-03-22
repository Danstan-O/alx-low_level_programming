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
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
