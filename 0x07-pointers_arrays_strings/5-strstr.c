#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - check the code
 * @haystack: input parameter
 * @needle: input parameter
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
char *res =  strstr(haystack, needle);
return (res);
}
