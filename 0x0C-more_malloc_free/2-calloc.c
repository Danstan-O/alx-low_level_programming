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
char *check;
unsigned int i;

check = malloc(size * nmemb);
if (check == NULL || nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
check[i] = 0;
}
return (check);
}
