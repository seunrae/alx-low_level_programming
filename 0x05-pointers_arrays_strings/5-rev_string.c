#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 *
 * @s: input parameter
 */

void rev_string(char *s)
{
int i, j;
char value;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
	value = s[i];
	s[i] = s[j];
	s[j] = value;
	}
}
