#ifndef _DOG_H_
#define _DOG_H_

/* for use of NULL */
#include <stddef.h>
/* for use of malloc */
#include <stdlib.h>
/* for use of printf */
#include <stdio.h>

/**
 * struct dog - creates a model of a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* initializes a variable of type dog */
void init_dog(dog_t *d, char *name, float age, char *owner);
/* prints a 'dog' */
void print_dog(dog_t *d);
/* creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);
/* free's a dog */
void free_dog(dog_t *d);

#endif
