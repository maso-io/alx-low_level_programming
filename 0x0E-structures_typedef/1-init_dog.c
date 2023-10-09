#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: pointer to a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
