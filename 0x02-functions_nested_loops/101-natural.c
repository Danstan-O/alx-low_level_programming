#include <stdio.h>
#include "main.h"

/**
 * main - our main entry
 * Return: returns 0
 */
int main(void)
{
int i;
int j = 0;

for (i = 1; i <= 1023; i++)
{
if (i % 3 == 0 || i % 5 == 0)

{
j = i + j;
printf("%d\n", j);
}
}
return (0);
}
