#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
char **strtow(char *str)
{
size_t i;
char **ch;
	if (str == NULL || strlen(str) == 0)
	{
	return (NULL);
	}
ch = malloc(strlen(str) + sizeof(char *));
	if (ch == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
	ch[i] = malloc()
		if(str[i] != ' ')
		{
		*ch[i] = str[i];
		}
	}
return (ch);
}
