#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 * Return: is void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
      	d->age = age;
       	d->owner = owner;
}
