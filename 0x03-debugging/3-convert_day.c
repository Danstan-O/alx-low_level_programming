#include "main.h"

/**
 * convert_day - converts day of the month to day of the year
 * without accounting for leap years
 * @month: month in number format
 * @day: day of the month
 * Return: day of year
 */

int convert_day(int month, int day)
{
switch (month)
{
case 2:
day = 31 + day;
break;
case 3:
day = 31 + day;
break;
case 4:
day = 31 + day;
break;
case 5:
day = 31 + day;
break;
case 6:
day = 31 + day;
break;
case 7:
day = 31 + day;
break;
case 8:
day = 31 + day;
break;
case 9:
day = 31 + day;
break;
case 10:
day = 31 + day;
break;
case 11:
day = 31 + day;
break;
case 12:
day = 31 + day;
break;
default:
break;
}
return (day);
}
