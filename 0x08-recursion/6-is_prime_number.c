#include <stdio.h>
#include "main.h"
/**
 * is_prime_number_helper - main code
 * @n: input parameter
 * @divisor: input parameter
 * Return: prime number
 */
int is_prime_number_helper(int n, int divisor)
{
	if (divisor <= 1)
	{
	return (1);
	}
	if (n % divisor == 0)
	{
	return (0);
	}
	else
	{
	return (is_prime_number_helper(n, divisor - 1));
	}
}
/**
 * is_prime_number - main code
 * @n: input code
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
return (is_prime_number_helper(n, n - 1));
}
