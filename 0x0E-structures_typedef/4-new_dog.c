#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, lname, lowner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	n_dog->name = malloc(lname + 1);
	n_dog->owner = malloc(lowner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	n_dog->age = age;

	for (i = 0; i < lowner; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';

	return (n_dog);
}
