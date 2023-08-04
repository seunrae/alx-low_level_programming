#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - function to allocate a value b in the memory s, n times
 * @s: input parameter
 * @b: input parameter
 * @n: input parameter
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
