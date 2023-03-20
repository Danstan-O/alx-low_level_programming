#include<stdio.h>
/**
 * main - major entry point
 * Return: returns 0
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 9; i++)
for (j = 1; j < 10; j++)
{
if (i != j && j > i)
{
putchar((i) + '0');
putchar((j) + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
