#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - accepts a string and returns a pointer to a new string
 * @str: input parameter
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
char *ptr;
char *str1 = str;
size_t i;
	if (str == NULL)
	{
	return (NULL);
	}
ptr = malloc((strlen(str)) * sizeof(char));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
	ptr[i] = str1[i];
	}
return (ptr);
}
