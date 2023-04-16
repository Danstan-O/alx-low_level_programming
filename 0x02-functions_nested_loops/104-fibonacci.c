#include <stdio.h>

/**
 * main - our major entry point
 * Return: returns a 0
 * @n: the input value
 */

int fib(unsigned int n);

int main(void)
{
fib(96);
return (0);
}

/**
 * fib - our major entry point
 * Return: returns the fib numbers
 * @n: the input value
 */


int fib(unsigned int n)
{
unsigned  int i;
unsigned long int j, k, result;

j = 1;
k = 2;
printf("%ld, %ld, ", j, k);
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
