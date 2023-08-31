#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a numbet.
 * @n: input parameter
 * Return: nothing
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
