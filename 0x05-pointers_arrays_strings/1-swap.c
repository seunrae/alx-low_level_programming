#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: input parameter
 * @b: input parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
