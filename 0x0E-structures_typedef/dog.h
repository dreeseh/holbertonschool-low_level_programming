#ifndef REESES_HEADER_H
#define REESES_HEADER_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure that has 2 chars and one float
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
