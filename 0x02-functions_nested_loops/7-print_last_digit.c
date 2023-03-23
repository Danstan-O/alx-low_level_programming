#include "main.h"
/**
 * print_last_digit - prints the 0
 * @n: takes in an integer argument
 * Return: returns 0
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
int abs_num;
int abs_number;
if (n > 0)
{
_putchar(last_digit + '0');
return (0);
}
else if (n < 0)
{
abs_num *= -1;
last_digit = abs_num % 10;
_putchar(last_digit + '0');
return (0);
}
else
{
_putchar('0');
return (0);
}
}
