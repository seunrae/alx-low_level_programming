#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * _atoi - check the code
 * @s: input parameter
 * Return: Always 0.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r')
	{
	i++;
	}
	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[i] == '+')
	{
	i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
	if (result > (INT_MAX - (s[i] - '0')) / 10)
	{
	return (sign == 1 ? INT_MAX : INT_MIN);
	}
	result = result * 10 + (s[i] - '0');
	i++;
	}
return (sign * result);
}
