#include "main.h"

/**
 * print_line - prints a straight line
 * @n: takes in an argument
 */

void print_diagonal(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
