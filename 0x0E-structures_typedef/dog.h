#ifndef DOG
#define DOG

#include <stdio.h>

/**
 * struct dog - creates a dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/* defines a new type dog_t as a new name for type struct dog */
typedef struct dog dog_t;
/* initialises a dog object */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* prints a dog object */
void print_dog(struct dog *d);
#endif