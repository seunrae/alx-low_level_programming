#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function to convert lowercase characterss to uppercase
 * @str: input parameter
 * Return: converted string
 */
char *string_toupper(char *str)
{
char *ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
		*ptr = *ptr - ('a' - 'A');
		}
	ptr++;
	}
return (str);
}

