#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - creates a dog
 * @name: provides name of the dog
 * @age: provides age to the dog
 * @owner: name of the dog owner
 * @d: struct declaration
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->age = age;
d->name = name;
d->owner = owner;
}
