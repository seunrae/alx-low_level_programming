#include "main.h"
#include <stdio.h>

/**
 * rot13 - check the code
 * @str: input parameter
 * Return: str.
 */
char *rot13(char *str)
{
char *ptr = str;
char alphaset1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char alphaset2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
	while (*ptr != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*ptr == alphaset1[i])
			{
			*ptr = alphaset2[i];
			break;
			}
		}
	ptr++;
	}
return (str);
}
