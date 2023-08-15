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
	int n_len, o_len;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (name != NULL && owner != NULL && d != NULL)
	{
		n_len = strlen(name) + 1;
		o_len = strlen(owner) + 1;
		d->name = malloc(n_len * sizeof(char));
		d->owner = malloc(o_len * sizeof(char));
		if (d->name == NULL || d->name == NULL)
		{
			if (d->name == NULL)
				free(d->name);
			if (d->owner == NULL)
				free(d->owner);
			free(d);
			return (NULL);
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		free(d);
		return (NULL);
	}
	return (d);
}
