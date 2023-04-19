#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints index of a number
 * @array: takes in an array of pointers
 * @size: the size of our array
 * @cmp: used to compare values
 * Return: returns 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
