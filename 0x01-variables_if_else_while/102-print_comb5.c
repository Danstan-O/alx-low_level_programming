#include<stdio.h>
/**
 * main - major entry point
 * Return: returns 0
 */
int main(void)
{
int i;
int j;
int k;
int l;
for (i = 0; i < 10; i++)
for (j = 0; j < 9; j++)
for (k = 0; k < 10; k++)
for (l = 0; l < 10; l++)
{
if ((i != k || i != l) && (j != k || j != l) && (i >= k))
{
putchar((i) + '0');
putchar((j) + '0');
putchar(' ');
putchar((k) + '0');
putchar((l) + '0');
if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
