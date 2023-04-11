#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _strdup - the input value
 * @str: our input parameter
 * Return: returns duplicate if true
 */

char *_strdup(char *str)
{
char *dup;
int i, length;
i = 0;
length = 0;

if (str == NULL)
{
return (NULL);
}
while (str[length])
{
length++;
}
dup = malloc(sizeof(char) * (length + 1));
if (dup == NULL)
{
return (NULL);
}
while ((dup[i] = str[i]) != '\0')
{
i++;
}
return (dup);
}
