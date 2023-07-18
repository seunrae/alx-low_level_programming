#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0 ,j;
	while (i < 10)
	{
	j = 'a';
		while (j <= 'z')
		{
		putchar(j);
		j++;
		}
	putchar('\n');
	i++;
	}
}
