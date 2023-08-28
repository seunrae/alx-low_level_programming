#include "main.h"
#include <ctype.h>
/**
 * _islower - check the code
 * @c: character parameter to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
