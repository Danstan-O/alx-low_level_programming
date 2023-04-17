#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: provides name of the dog
 * @age: provides age to the dog
 * @owner: name of the dog owner
 * Description: longer description
 *
 */

struct dog
{
char *name;
char *owner;
float age;
};

/**
 * dog_t - typedef for struct dog
 *
 */

typedef struct dog dog_t;
void init(struct dog *d, char *name, float age, char *owner);
#endif