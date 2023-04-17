#include <stdio.h>
#include <stdlib.h>

struct Dog
{
char *name;
float age;
char *owner;
};

struct Dog *my_dog(char *name, char *owner, float age)
{
struct Dog *dog;
dog = malloc(sizeof(struct Dog));
if (dog == NULL)
{
return (NULL);
}
dog->age = age;
dog->name = name;
dog->owner = owner;

return (dog);
}
