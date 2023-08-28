#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: string array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int sum = 1;
int i;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
		sum = sum * atoi(argv[i]);
		}
	}
	else
	{
	printf("Error\n");
	return (1);
	}
printf("%d\n", sum);
return (0);
}
