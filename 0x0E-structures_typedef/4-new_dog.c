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
	dog_t *new_dog;
	char *namelength, *ownerlength;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	ownerlength = malloc(sizeof(char) * _strlen(owner) + 1);
	_strcpy(ownerlength, owner);
	if (ownerlength == NULL)
	{
		free(ownerlength);
		free(new_dog);
		return (NULL);
	}
	namelength = malloc(sizeof(char) * _strlen(name) + 1);
	_strcpy(namelength, name);
	if (namelength == NULL)
	{
		free(ownerlength);
		free(namelength);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = namelength;
	new_dog->age = age;
	new_dog->owner = ownerlength;
	return (new_dog);
}
