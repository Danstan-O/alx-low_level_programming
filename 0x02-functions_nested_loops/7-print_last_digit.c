#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the 0
 * @n: takes in an integer argument
 * Return: returns 0
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
_putchar('\n');
return (0);
}
