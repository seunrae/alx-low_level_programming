#include <stdio.h>
#include <stdlib.h>
/**
 * minCoins -  check the code
 * @cents: input parameter
 * Return: count
 */
int minCoins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int numCoins, i, count = 0;
	if (cents < 0)
	{
	return (0);
	}
numCoins = sizeof(coins) / sizeof(coins[0]);
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
		cents -= coins[i];
		count++;
		}
	}
return (count);
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: string array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int cents;
int result;
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
cents = atoi(argv[1]);
result = minCoins(cents);
printf("%d\n", result);
return (0);
}
