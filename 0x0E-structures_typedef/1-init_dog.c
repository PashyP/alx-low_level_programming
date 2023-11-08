#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize the dog class
 * @d: pointer to struct dog
 * @name: first attributes
 * @age: second attributes
 * @owner: third attributes
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
