#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - check the code
 * @s: input parameter
 * @c: input parameter
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
char *res = strchr(s, c);
	if (!*res)
	{
	return (NULL);
	}
return (res);
}
