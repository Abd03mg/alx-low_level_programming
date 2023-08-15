#ifndef FILE_H
#define FILE_H

/**
 * struct dog - short Description.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
#endif
