#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: input parameter
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
return (1 + _strlen_recursion(s + 1));
}
