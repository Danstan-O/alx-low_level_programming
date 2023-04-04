#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: the input value
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", 98);
}
else
{
if (n > 98)
{
for (; n >= 98 ; n--)
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d", n);
printf(", ");
}
}
else if (n < 98)
{
for (; n <= 98; n++)
if (n == 98)
{
printf("%d", n);
}
else
{
printf("%d", n);
printf(", ");
}
}
printf("\n");
}
}
