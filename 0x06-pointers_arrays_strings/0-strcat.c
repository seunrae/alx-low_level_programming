#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
char *dest_ptr = dest;//hello world!
	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}
	while (*src != '\0')
	{
	*dest_ptr = *src; 
	dest_ptr++;
	src++;
	}
*dest_ptr = '\0';
return (dest);
}
