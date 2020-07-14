#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner:owner of dog
 *Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namelength, *ownerlength;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	namelength = malloc(sizeof(char) * strlen(name) + 1);
	if (namelength == NULL)
	{
		return (NULL);
	}
	strcat(namelength, name);
	ownerlength = malloc (sizeof(char) * strlen(owner) + 1);
	if (ownerlength == NULL)
	{
		return (NULL);
	}
	strcat(ownerlength, owner);
	new_dog->name = namelength;
	new_dog->age = age;
	new_dog->owner = ownerlength;
	return (new_dog);
}
