#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - the major entry point
 * Return: returns 0
 */

void jack_bauer(void)
{
int minutes;
int hr;
for (hr = 0; hr < 24; hr++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar((minutes % 10) + '0');
_putchar('\n');
}
}
}
