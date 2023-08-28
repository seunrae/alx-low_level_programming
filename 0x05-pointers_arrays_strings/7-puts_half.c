#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 *
 * @str: input parameter
 */
void puts_half(char *str)
{
size_t i;
	if (strlen(str) % 2 != 0)
	{
		for (i = (strlen(str) + 1) / 2; i < strlen(str); i++)
		{
		_putchar(*(str + i));
		}
	}
	else
	{
		for (i = strlen(str) / 2; i < strlen(str); i++)
		{
		_putchar(*(str + i));
		}
	}
_putchar('\n');
}
