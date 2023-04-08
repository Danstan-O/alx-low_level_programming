#include "main.h"

/**
 * _isdigit -checks if the number is between 0 and 9
 * @c: our parameter
 * Return: returns 1 if a digit is between 0 and 9 and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
