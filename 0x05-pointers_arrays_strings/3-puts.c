#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - check the code
 * @str: input parameter
 */
void _puts(char *str)
{
size_t i;
	for (i = 0; i < strlen(str); i++)
	{
	_putchar(*(str + i));
	}
_putchar('\n');
}
