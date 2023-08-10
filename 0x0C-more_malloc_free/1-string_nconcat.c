#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - contatenates two strings
 * @s1: input parameter
 * @s2: input parameter
 * @n: input parameter
 * Return: new pointer to the contatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= strlen(s2))
	{
	n = strlen(s2);
	}
ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
strcpy(ptr, s1);
strncat(ptr, s2, n);
ptr[(strlen(s1) + n + 1) - 1] = '\0';
return (ptr);
}
