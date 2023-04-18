#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - initializes dog
 * @d: input
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->breed);
free(d);
}
}
