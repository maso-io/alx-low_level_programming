#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = (char *)malloc(sizeof(name));
	if (dog->name)
	{
		for (i = 0; name[i] != '\0'; i++)
			dog->name[i] = name[i];
		dog->name[i] = name[i];
	}
	else
	{
		free(dog);
		return (NULL);
	}
	if (age)
		dog->age = age;
	else
		return (NULL);
	dog->owner = (char *)malloc(sizeof(owner));
	if (dog->owner)
	{
		for (i = 0; owner[i] != '\0'; i++)
			dog->owner[i] = owner[i];
		dog->owner[i] = owner[i];
	}
	else
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
