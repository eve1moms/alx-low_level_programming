#include "dog.h"
#include<stdlib.h>
/**
* free_dog - frees the memodry that was allocated to struct dog
* @d: the struct dog to free
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner(;
		free(d);
	}
}
