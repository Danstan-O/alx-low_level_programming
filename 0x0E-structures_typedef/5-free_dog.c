#include "dog.h"
#include <stdio.h>

/**
 * free_dog - used to free the dog function
 * @d: our dog input
 * dog_t - the data input
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
