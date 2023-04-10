#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * sum - the summation point
 * @argc: The argument name
 * @argv: the argument parameters
 * Return: returns the sum of the total arguments
 */

int main(int argc, char *argv[])
{
int i;
int mul = 1;
int num1, num2;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < 2; i++)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 * num2;
printf("%d\n", mul);
return (mul);
}
}
return (0);
}
