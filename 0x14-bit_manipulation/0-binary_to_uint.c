#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
