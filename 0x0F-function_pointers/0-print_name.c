#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a value from a function to pointer
 * @f: input parameter
 * @name: input parameter
 * Return: nothing
 *
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
