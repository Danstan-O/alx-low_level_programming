#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *positive_or_negative - prints if the number is negative, positive or 0
 *@i: the number generated
 */
void positive_or_negative(int i)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
}
