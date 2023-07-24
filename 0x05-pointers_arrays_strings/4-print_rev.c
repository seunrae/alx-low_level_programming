#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
	for (i = strlen(s)-1; i >= 0; i--)
	{
	_putchar(*(s + i));
	}
_putchar('\n');
}
