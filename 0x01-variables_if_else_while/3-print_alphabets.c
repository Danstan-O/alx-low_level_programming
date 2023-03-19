#include<stdio.h>
/**
 * main -major entry point
 * Return: returns 0
 */
int main(void)
{
char i;
char j;
for ( i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for ( j = 'A'; j <= 'Z'; j++)
{
    putchar(j);
}

putchar('\n');
}