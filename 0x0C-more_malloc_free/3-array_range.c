#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that returns an array of integers
 * @min: input parameter
 * @max: input parameter
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
int elenum = max - min + 1;
int *arr = malloc(sizeof(int) * elenum);
int i;
	if (min > max)
	{
	return (NULL);
	}
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = min; i < elenum; i++)
	{
	arr[i] = min + i;
	}
return (arr);
}
