#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to the output
 * @c: the character to be printed
 * Return: returns 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}