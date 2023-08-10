#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: input parameter
 * @size: input parameter
 * Return: pointer to the array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (NULL);
	}
return (ptr);
}
