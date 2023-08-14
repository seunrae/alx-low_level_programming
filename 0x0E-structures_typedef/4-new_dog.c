#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
char *_strdup(char *input);
/**
 * new_dog - check code
 * @name: input parameter
 * @owner: input parameter
 * @age: input parameter
 * Return: new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
dog->name = _strdup(name);
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
dog->age = age;
return (dog);
}
/**
 * _strdup - copies a given string into a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to new allocated string
 */

char *_strdup(char *str)
{
	char *ptr = str;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (*ptr++ != '\0')
		count = count + 1;

	ptr = malloc((count + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	count = 0;
	while (*str)
		ptr[count++] = *str++;

	ptr[count] = *str;

	return (ptr);
}
