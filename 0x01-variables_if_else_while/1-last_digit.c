#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - returns if a number is negative, positive or 0
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
int lastDigit;
lastDigit = n % 10;
if (n > 5)
{
printf("Last digit of %d  is %d and is greater than 5\n", n, lastDigit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (n < 6 && n == 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
