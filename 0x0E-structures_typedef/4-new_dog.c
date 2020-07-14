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
	dog_t *new_dog;
	char namelength;
	char ownerlength;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	namelength = _strlen(name);
	ownerlength = _strlen(owner);

	new_dog->name = malloc(sizeof(char) * (namelength + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (ownerlength + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name, namelength + 1);
	new_dog->owner = _strcpy(new_dog->owner, owner, ownerlength + 1);
	new_dog->age = age;
	return (new_dog);
}
