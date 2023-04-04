#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in a year
 * taking leap years into account
 * Return: Always 0
 */

int main(void)
{
int month = 4;
int day = 01;
int year = 1997;
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
print_remaining_days(month, day, year);
return (0);
}
