#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - check the code
 * @s: input parameter
 * @accept: input parameter
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
char *res = strpbrk(s, accept);
return (res);
}
