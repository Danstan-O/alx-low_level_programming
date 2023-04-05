#include "main.h"

/**
 * print_line - prints a straight line
 * @n: takes in an argument
 */

void print_line(int n)
{
char i;
for (i = 0; i <= n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
