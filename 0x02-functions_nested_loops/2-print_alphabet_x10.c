#include "main.h"
/**
 * print_alphabet_x10 - the major entry point
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
int times;
char i;
for (times = 0; times <= 9; times++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
