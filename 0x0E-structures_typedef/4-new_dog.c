#include <stdio.h>
#include <string.h>
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
dog_t *dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
dog->name = strdup(name);
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
dog->age = age;
return (dog);
}
