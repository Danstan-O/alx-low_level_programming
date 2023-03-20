#include<stdio.h>
/**
 * main - major entry point
 * Return: returns a 0
 */
int main(void)
{
char i;
int j;
for (j = 0; j <= 10; j++)
{
putchar((j % 10) + '0');
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
