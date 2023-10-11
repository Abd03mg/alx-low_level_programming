#include "dog.h"
/**
 * _strcpy - function that return copy of string.
 * @dest: destination strinng.
 * @src: source strig.
 * Return: copy of string.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
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
	int nlen = 0, olen = 0;

	while (name[nlen] != '\0')
		nlen++;
	while (owner[olen] != '\0')
		olen++;

	new = malloc(sizeof(dog_t));
	new->name = malloc(nlen + 1);
	new->owner = malloc(olen + 1);
	if (!(new || new->name || new->owner))
	{
		free(new->name);
		free(new->owner);
		return (NULL);
	}

	_strcpy(new->name, name);
	new->age = age;
	_strcpy(new->owner, owner);

	return (new);
}
