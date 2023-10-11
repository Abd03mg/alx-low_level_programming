#include "dog.h"

/**
 * new_dog - function that creates new dog.
 * @name: new dog name.
 * @age: new dog age.
 * @owner: new dog owner.
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	strcpy(dog->name, name);
	new->age = age;
	strcpy(dog->owner, owner);

	return (new);
}
