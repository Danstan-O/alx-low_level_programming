#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints out numbers
 * @separator: provides space
 * @n: the first integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != (n-1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
