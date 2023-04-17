#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints properties of a dog
 * @d: struct declaration
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
if (d->name == NULL)
{
d->name = "(nil)";
}
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
