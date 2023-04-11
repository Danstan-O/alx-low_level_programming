#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: the size of the array to be returned
 * @c: the input value
 * Return: returns a char
 */

char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
if (size == 0 || array == 0)
{
return (NULL);
}
while (size--)
{
array[size] = c;
}
return (array);
}
