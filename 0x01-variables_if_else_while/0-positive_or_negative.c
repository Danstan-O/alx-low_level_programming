#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main - prints if the number is negative, positive or 0
 *Return: Always 0
 */
int main(void)
{
int number;

srand(time(0));
number = rand() - RAND_MAX / 2;
if (number > 0)
{
printf("%d is positived\n", number);
}
else if (number == 0)
{
printf("%d is zero\n", number);
}
else
{
printf("%d is negative\n", number);
}
return (0);
}
