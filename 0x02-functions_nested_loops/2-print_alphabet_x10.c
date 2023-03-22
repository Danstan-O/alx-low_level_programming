#include "main.h"
/**
 * print_alphabet - the major entry point
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
char i;
for (i = 'a'; i <= 'z'; i = i + 10)
{
_putchar(i);
}
_putchar('\n');
}