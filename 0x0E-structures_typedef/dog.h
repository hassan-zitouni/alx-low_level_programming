#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialized struct_dog
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
