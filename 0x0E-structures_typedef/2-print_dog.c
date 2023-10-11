#include "dog.h"

/**
 * print_dog - fuction that prints a struct dog.
 * @d: the dog will be prited.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
