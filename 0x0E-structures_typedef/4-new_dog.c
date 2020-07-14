#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: pointer to string
 * Return: int i
 */

/* string length */
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
 * @n: int
 * Return: the 3rd string
 */
char *_strcpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n ; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}

/* create new struct */
/**
 * new_dog - making a new dog
 * @name: dogs name
 * @age: gods age
 * @owner: dogs owner
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fido;
	int namelength;
	int ownerlength;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	fido = malloc(sizeof(dog_t));

	namelength = _strlen(name);
	ownerlength = _strlen(owner);

	fido->name = malloc(sizeof(char) * (namelength + 1));

	if (fido->name == NULL)
	{

		free(fido);
		return (NULL);
	}

	fido->owner = malloc(sizeof(char) * (ownerlength + 1));
	if (fido->owner == NULL)
	{
		free(fido->owner);
		free(fido);
		return (NULL);
	}
	fido->name = _strcpy(fido->name, name, namelength + 1);
	fido->owner = _strcpy(fido->owner, owner, ownerlength + 1);
	fido->age = age;
	return (fido);
}
