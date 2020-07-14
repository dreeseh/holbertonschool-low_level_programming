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
	char *copyname, *copyowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	copyname = malloc(sizeof(char) * (_strlen(name) + 1));
	if (copyname == NULL)
	{
		return (NULL);
	}
	_strcpy(copyname, name);
	copyowner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (copyowner == NULL)
	{
		return (NULL);
	}
	_strcpy(copyowner, owner);
	new_dog->name = copyname;
	new_dog->age = age;
	new_dog->owner = copyowner;
	return (new_dog);
}
