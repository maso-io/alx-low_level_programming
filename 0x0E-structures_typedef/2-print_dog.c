#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog to print
 */
void print_dog(dog_t *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
