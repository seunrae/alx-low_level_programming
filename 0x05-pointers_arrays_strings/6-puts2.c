#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 *
 * @str: input parameter
 */
void puts2(char *str)
{
size_t i;
	for (i = 0;  i < strlen(str); i += 2)
	{
	_putchar(*(str + i));
	}
_putchar('\n');
}
