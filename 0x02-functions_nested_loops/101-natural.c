#include <stdio.h>
#include "main.h"

/**
 * main - our main entry
 * @n: our integer input
 * Return: returns 0
 */
int natural(int n);
int main(void)
{
printf("%d\n", natural(1023));
return (0);
}

/**
 * natural - used to sum up the integers
 * @n: our integer input
 * Return: returns an integer
 */

int natural(int n)
{
int i;
int j = 0;

for (i = 3; i <= n; i++)
{
if (i % 3 == 0 || i % 5 == 0)

{
j = i + j;
printf("%d\n", j);

}
}
return (j);
}
