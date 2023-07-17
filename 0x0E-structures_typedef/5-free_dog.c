#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees up memory from struct my_dog
 * @d: struct my_dog
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	if (d)
		free(d);
}
