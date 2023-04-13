#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - allocates memory to malloc
 * Return: returns an integer
 * @min: the first input parameter
 * @max: the second input parameter
 */

int *array_range(int min, int max)
{
int *check;
int i;
if (min > max)
{
return (NULL);
}

check = malloc(sizeof(*check) * (max - min) + 1);
if (check == NULL)
{
return (NULL);
}

for (i = 0; min <= max; i++, min++)
{
check[i] = min;
}
return (check);
}
