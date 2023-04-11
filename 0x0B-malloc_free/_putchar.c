#include <unistd.h>
#include "main.h"

/**
 * _putchar - our main entry
 * @c: our input value
 * Return: returns a 0 on success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
