#include "dog.h"

/**
 * _strlen - calculate the lenght of a string
 * @str: string to calculate length of
 *
 * Return: integer length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		continue;
	return (i + 1);
}
/**
 * _strcpy - copies string
 * @s1: string to copy into
 * @s2: string to copy from
 */
void _strcpy(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}


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
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = (char *)malloc(sizeof(name) * _strlen(name));
	if (dog->name)
	{
		_strcpy(dog->name, name);
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
	dog->owner = (char *)malloc(sizeof(name) * _strlen(owner));
	if (dog->owner)
	{
		_strcpy(dog->owner, owner);
	}
	else
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
