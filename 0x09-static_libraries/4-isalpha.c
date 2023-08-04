#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isalpha - check the code
 * @c: input parameter
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
