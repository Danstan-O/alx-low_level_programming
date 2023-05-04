#include "main.h"

/**
 * get_bit - gets a bit at a particular index
 * @n: the parameter input
 * @index: the index of the bit
 * Return: returns the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (n == 0 && index < 64)
{
return (0);
}
for (i = 0; i < 64; i++, n >>= 1)
{
if (index == i)
{
return (n & 1);
}

}
return (-1);
}
