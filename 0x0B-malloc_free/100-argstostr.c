#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - accepts arguements and concantenates them
 * @ac: input parameter
 * @av: input parameter
 * Return: pointer to the contatenated string
 */
char *argstostr(int ac, char **av)
{
int i, pos = 0, totalLength = 0;
char *ch;
	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	totalLength += strlen(av[i]) + 1;
	}
ch = (char *)malloc(totalLength + 1);
	if (ch == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	strcpy(ch + pos, av[i]);
	pos += strlen(av[i]);
	ch[pos] = '\n';
	pos++;
	}
return (ch);
}
