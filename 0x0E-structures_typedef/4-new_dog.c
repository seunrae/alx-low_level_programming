#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - check code
 * @name: input parameter
 * @owner: input parameter
 * @age: input parameter
 * Return: new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
