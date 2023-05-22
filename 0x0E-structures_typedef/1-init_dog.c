#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialozes avriable type struct dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* @d: pointer to struct dog to initialixe
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
