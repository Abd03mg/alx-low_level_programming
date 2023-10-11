#include "main.h"

/**
 * free_dog - fuction that frees dogs.
 * @d: the dog should be free.
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
