#include "main.h"

/**
 * clear_bit - converts a binary number to an integer
 * @n: the parameter input
 * @index: the index of the bit
 * Return: returns the value of the bit at index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int clear;
if (index > 63)
{
return (-1);
}
clear = 1 << index;
if (*n & clear)
{
*n ^= clear;
}
return (1);
}
