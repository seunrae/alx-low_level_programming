#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints an array of characters
 * @size: input parameter
 * @c: input parameter
 * Return: ch pointer to the first charcter in the array
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return NULL;
	}
char *ch;
unsigned int i;
ch = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
	ch[i] = c;
	}
return (ch);
}
