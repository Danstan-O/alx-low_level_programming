#include "main.h"
#include <stdio.h>
/**
 * main - the major entry point
 * jack_bauer - the major entry point
 * Return: returns 0
 */
int main(void)
{
jack_bauer();
return (0);
}

/**
 * jack_bauer - the major entry point
 */
void jack_bauer(void)
{
int m;
int h;
for (m = 0; m < 60; m++)
{
if (m == 5)
{
for (h = 0; h < 24; h++)
{
if (h == 23 && m == 59)
{
break;
}
}
}
}
_putchar(h + '0');
_putchar(':');
_putchar(m + '0');
}
