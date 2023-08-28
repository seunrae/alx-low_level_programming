#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - accepts to strings concatenats them and returns a pointer
 * @s1: input parameter
 * @s2: input parameter
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
ptr = malloc((strlen(s1) + strlen(s2)) + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
strcpy(ptr, s1);
strcat(ptr, s2);
return (ptr);
}
