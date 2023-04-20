#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints out numbers
 * @separator: provides space
 * @n: the first integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
char *string;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
string = va_arg(ap, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
