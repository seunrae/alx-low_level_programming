#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: 0
 */

int main(void)
{
long largest = -1;
long num = 612852475143;
long i;
	while (num % 2 == 0)
	{
	largest = 2;
	num /= 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
		largest = i;
		num /= i;
		}
	}
	if (num > 2)
	{
	largest = num;
	}
printf("%ld\n", largest);
return (0);
}
