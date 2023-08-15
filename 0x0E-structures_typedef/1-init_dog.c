#include "dog.h"
/**
 * init_dog - initialises a variable of type dog
 * @d: dog object
 * @name: name to give to dog obj
 * @age: to give to dog obj
 * @owner: of dog obj
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
