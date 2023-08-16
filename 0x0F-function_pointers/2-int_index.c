#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - compares values passed to it
 * @array: input parameter
 * @size: input parameter
 * @cmp: input parameter
 * Return: index of the number passed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
	if (array == NULL || size == 0 || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
return (-1);
}
