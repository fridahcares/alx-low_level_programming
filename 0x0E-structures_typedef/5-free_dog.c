#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
