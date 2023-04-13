#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory to malloc
 * Return: returns a void
 * @b: out input value
 */

void *malloc_checked(unsigned int b)
{
char *check;
check = malloc(b);
if (check == NULL)
{
exit(98);
}
return (check);
}
