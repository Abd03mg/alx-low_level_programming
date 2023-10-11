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
	new->name = malloc(sizeof(name) + 1);
	new->owner = malloc(sizeof(owner) + 1);
	if (!(new || new->name || new->owner))
		return (NULL);

	strcpy(new->name, name);
	new->age = age;
	strcpy(new->owner, owner);

	return (new);
}
