#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *reverse_string(char *str)
{
int len = strlen(str);
int i, j;
char temp;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
	temp = str[i];
	str[i] =  str[j];
	str[j] = temp;
	}
return str;
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry, sum, idx;
int i, j;
int digit1, digit2;
int len1 = strlen(n1);
int len2 = strlen(n2);
reverse_string(n1);
reverse_string(n2);
	for (i = 0, j = 0; i < len1 || j < len2 || carry; i++, j++)
	{
	digit1 = (i < len1) ? n1[i] - '0' : 0;
        digit2 = (j < len2) ? n2[j] - '0' : 0;
	sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
		if (idx < size_r - 1)
		{
        	r[idx++] = sum + '0';
        	}
		else
		{
            	return 0;
        	}
	}
r[idx] = '\0';
reverse_string(r);
return (r);
}
