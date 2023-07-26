#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string: function to capitalize letters of a string
 * @str : input parameter
 * Return: capitalized string
 */
char *cap_string(char *str)
{
int capitalize_next = 1;
char *ptr = str;
	while (*ptr != '\0')
	{
		if(*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
		capitalize_next = 1;
		}
		else if (capitalize_next)
		{
		*ptr = toupper(*ptr);
		capitalize_next = 0;
		}
	ptr++;
	}
return (str);
}
