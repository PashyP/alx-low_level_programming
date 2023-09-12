#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 *@d: point struct dog to operate
 *name: name to initialize
 *age: age to initialize
 *owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
