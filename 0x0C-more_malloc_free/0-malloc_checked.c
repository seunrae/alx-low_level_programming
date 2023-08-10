#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - accepts a number of bytes and allocates it to the memory
 * @b: input parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
return (ptr);
}
