#include <stdlib.h>
#include "dog.h"
/* string length */
/**
 * _strlen - finds length of string
 * @s: char pointer to string
 * Return: none
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* concatonate string function */
/**
 * _strcpy -copies a string
 * @dest: string b
 * @src: string a
 * Return: the 3rd string
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = src[j];
	return (dest);
}
/* new dog program */
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner:owner of dog
 *Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
	char *namelength, *ownerlength;

	new = malloc(sizeof (dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	namelength = malloc(sizeof(char) * _strlen(name) + 1);
	if (namelength == NULL)
	{
		free(namelength);
		return (NULL);
	}
	_strcpy(namelength, name);
	ownerlength = malloc(sizeof(char) * _strlen(owner) + 1);
	if (ownerlength == NULL)
	{
		free(ownerlength);
		return (NULL);
	}
	_strcpy(ownerlength, owner);
	new->name = namelength;
	new->age = age;
	new->owner = ownerlength;
	return (new);
}
