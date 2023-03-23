#include "main.h"
/**
 * print_last_digit - prints the 0
 * @n: takes in an integer argument
 * Return: returns 0
 */
int print_last_digit(int n)
{
int last_digit;
int abs_num;
if (n > 0)
{
last_digit = n % 10;
return (last_digit);
}
else if (n < 0)
{
abs_num = abs(n);
abs_num = n % 10;
return (abs_num);
}
else
{
return (0);
}
}
