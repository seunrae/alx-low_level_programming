#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
size_t i;
	for (i = 0;  i < strlen(str); i++)
	{
	_putchar(*(str + i));
	}
}
