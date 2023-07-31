#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code
 * @s: input parameter
 * @accept: input parameter
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int res = strspn(s, accept);
return (res);
}
