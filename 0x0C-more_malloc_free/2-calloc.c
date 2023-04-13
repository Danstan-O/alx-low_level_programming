#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory to malloc
 * Return: returns a void
 * @nmemb: the first parameter
 * @size: the second parameter
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *check = 0;

check = malloc(size * nmemb);
if (check == NULL || nmemb == 0 || size == 0)
{
return (NULL);
}
return (check);
}
