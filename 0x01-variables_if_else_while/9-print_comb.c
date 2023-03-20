#include<stdio.h>
/**
 * main - major entry point
 * Return: returns 0
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
putchar((i) + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
