#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function name
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
