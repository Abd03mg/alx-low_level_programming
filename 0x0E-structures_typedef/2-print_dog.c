#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - functiont that prints a struct dog.
 * @d: struct that will be printed.
 * Return: if d equals null return noting.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return ('\0');
	if ((*d).name == NULL)
		d->name = "(nil)";
	if ((*d).owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, d->owner);
}

