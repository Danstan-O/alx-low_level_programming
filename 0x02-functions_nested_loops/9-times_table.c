#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the multiplication table
 */
void times_table(void)
{
int i;
int times;
int prod;
for (times = 0; times < 10; times++)
{
_putchar('0');

for (i = 1; i < 10; i++)
{
_putchar(',');
_putchar(' ');

prod = i * times;
if (prod < 10)
{
_putchar(' ');

}
else
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
