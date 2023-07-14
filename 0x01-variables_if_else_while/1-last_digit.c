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
int length;
char chNum;
int lastNum;
srand(time(0));
n = rand() - RAND_MAX / 2;
sprintf(nString, "%d", n);
length = strlen(nString);
chNum = nString[length - 1];
lastNum = chNum - '0';
if (n < 0)
{
	if (lastNum == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastNum);
	}
printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, lastNum);
}
else if (lastNum > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
}
else if (lastNum == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastNum);
}
else if (lastNum < 6 && lastNum != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
}
return (0);
}
