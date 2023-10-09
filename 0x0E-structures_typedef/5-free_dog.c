#include "dog.h"

/**
 * free_dog - free memory allocation to a dog
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
