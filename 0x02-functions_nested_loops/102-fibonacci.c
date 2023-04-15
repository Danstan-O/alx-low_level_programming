#include <stdio.h>

/**
 * main - our major entry point
 * Return: returns a 0
 * @n: the input value
 */

int fib(int n);

int main(void)
{
fib(50);
return (0);
}

/**
 * fib - our major entry point
 * Return: returns the fib numbers
 * @n: the input value
 */


int fib(int n)
{
int i = 1, j = 2, result;

for (i = 0; i <= n; i++)
{
if (i == n)
{
result = i + j;
j = result + i;
printf("%d", result);
}
else
{
result = i + j;
j = j + i;
result = j;
printf("%d, ", result);
}
}
printf("\n");
return (result);
}
