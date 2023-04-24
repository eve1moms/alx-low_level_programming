#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function
 * Return: always 0
 */
int main(void)
{
	int n;
	int nl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nl = n % 10;
	if (nl > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, nl);
	}
	else if (nl == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, nl);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and is not 0\n", n, nl);
	}
	return (0);
}
