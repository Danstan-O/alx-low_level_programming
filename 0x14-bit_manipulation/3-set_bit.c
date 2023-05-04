#include "main.h"

/**
 * set_bit - converts a binary number to an integer
 * @n: the parameter input
 * @index: the index of the bit
 * Return: returns the value of the bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int bit;

if (index > 63)
{
return (-1);
}
bit = 1 << index;
*n = (*n | bit);
return (1);
}
