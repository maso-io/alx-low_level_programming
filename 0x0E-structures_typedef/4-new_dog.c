#include "dog.h"
/**
 * new_dog - creates a new dog obj
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog obj
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n;
	dog_t *d;

	n =  strlen(owner) + 1 + strlen(name) + 1;
	d = malloc((n * sizeof(char)) + sizeof(int));
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
