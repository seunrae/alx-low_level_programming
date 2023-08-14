#include <stdio.h>
#include "dog.h"
/**
 * init_dog - accepts paramaters and assigns them to a structure
 * @d: input parameter
 * @name: input parameter
 * @age: input parameter
 * @owner: input parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
