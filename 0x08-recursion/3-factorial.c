#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @n: input parameter
 * Return: Always product of the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 1)
	{
	return (1);
	}
return (n * factorial(n - 1));
}
