#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - inputs name of a person
 * @name: gets the name
 * @f: the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);

}
