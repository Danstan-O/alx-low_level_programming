#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a single character
 * @c: our input character
 * Return: returns a character
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
