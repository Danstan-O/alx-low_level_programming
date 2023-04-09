#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - uses a unix library to print the output
 * @c: prints a character
 * Return: returns a unix output
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
