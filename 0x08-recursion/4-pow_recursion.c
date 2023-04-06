#include "main.h"

/**
 * _puts_recursion - prints a recursive function
 * @x: the parameter input
 * @y: the power function
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else 
{
return (x * _pow_recursion(x,(y - 1)));
}
}
