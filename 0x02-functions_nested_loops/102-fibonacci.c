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
int i;
long int j, k, result;

j = 1;
k = 2;

for (i = 0; i <= n; i++)
{
if (i == n)
{
result = k + j;

printf("%ld", result);
}
else
{
result = j + k;

printf("%ld, ", result);
j = k;
k = result;
}
}
printf("\n");
return (result);
}
