#include <stdio.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: string array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
return (0);
}
