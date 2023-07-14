#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char nString[20];
int length = strlen(nString);
srand(time(0));
n = rand() - RAND_MAX / 2;
sprintf(nString , "%d" , n);
char chNum = nString[length - 1];
int lastNumber = chNum - '0';
if (n < 0)
{
	if(lastNumber == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastNumber);
	}
printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, lastNumber);
}
else if (lastNumber > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
}
else if (lastNumber == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastNumber);
}
else if (lastNumber < 6 && lastNumber != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNumber);
}
return (0);
}
