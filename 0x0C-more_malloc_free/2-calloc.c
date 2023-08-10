#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: input parameter
 * @size: input parameter
 * Return: pointer to the array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
	return (NULL);
	}
memset(ptr, 0, (nmemb * size));
return (ptr);
}
