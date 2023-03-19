#include<stdio.h>
/**
 * main - major entry point
 * Return: returns 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
