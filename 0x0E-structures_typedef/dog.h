#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct Dog - a dog's basic info
 * @name: provides name of the dog
 * @age: provides age to the dog
 * @owner: name of the dog owner
 * Description: longer description
 * my_dog - takes in dogs
 */

struct Dog
{
char *name;
float age;
char *owner;
};

/**
 * my_dog - creates a dog
 * @name: provides name of the dog
 * @age: provides age to the dog
 * @owner: name of the dog owner
 * Return: returns the new dog
 */

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

#endif
