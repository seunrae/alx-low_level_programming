#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - check the code
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
