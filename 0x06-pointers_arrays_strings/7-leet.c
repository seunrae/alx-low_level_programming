#include "main.h"
#include <stdio.h>

/**
 * leet - function to encode as string in 1337
 * @str: input parameter
 * Return: encoded string in 1337
 */
char *leet(char *str)
{
char *ptr = str;
size_t i;
char replacements[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
char leet_chars[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	while (*ptr != '\0')
	{
		for (i = 0; i < sizeof(replacements); i++)
		{
			if (*ptr == replacements[i])
			{
			*ptr = leet_chars[i];
			break;
			}
		}
	ptr++;
	}
return (str);
}
