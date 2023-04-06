#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes c to the output
 * @c: prints a character
 * Return: returns 1 character
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
