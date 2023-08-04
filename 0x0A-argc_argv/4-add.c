#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: string array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
size_t j;
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}
		}
	if (atoi(argv[i]) < 0)
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[i]);
	}
printf("%d\n", sum);
return (0);
}
