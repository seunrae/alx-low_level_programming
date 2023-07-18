#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_last_digit - check the code
 * @n: input parameter
 * Return: Always 0.
 */
int print_last_digit(int n)
{
char nString[20];
int length;
char lastnum;
sprintf(nString, "%d", n);
length = strlen(nString);
lastnum = nString[length - 1];
int last = lastnum + '\0';
return (last);
}
