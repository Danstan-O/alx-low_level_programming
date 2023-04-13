#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - allocates memory to malloc
 * Return: returns a character
 * @s1: the first input parameter
 * @s2: the second input parameter
 * @n: the third input parameter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *check;
unsigned int l1, l2, l4, i;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (l1 = 0; s1[l1] != '\0'; l1++)
;
for (l2 = 0; s2[l2] != '\0'; l2++)
;
if (n >= l2)
{
n = l2;
}
l4 = l1 + n;
check = malloc(l4 + 1);
if (check == NULL)
{
return (NULL);
}
for (i = 0; i < l4; i++)
{
if (i < l1)
{
check[i] = s1[i];
}
else
{
check[i] = s2[i - l1];
}
}
check[i] = '\0';
return (check);
}
