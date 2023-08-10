#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr = malloc((strlen(s1) + strlen(s2)) + n + 1);
	if (s1 == NULL || s2 == NULL)
	{
	char *str = "";
	return (str);
	}
	if (ptr == NULL)
	{
	return (NULL);
	}
	if (n >= strlen(s2))
	{
	strncat(s1, s2, strlen(s2));
	ptr = s1;
	}
strncat(s1, s2, n);
ptr = s1;
return (ptr);
}
