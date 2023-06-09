#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the main function
 * @array: takes an array
 * @size: the size of our array input
 * @action: display all elements in an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
