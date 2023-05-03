#include "main.h"
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
/**
* main generates random password
* Return: 0
*/
int main(void)
{
	int password[100];
	int m, sum, n;

	sum = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		password[m] = rand() % 78;
		sum += (password[m] + '0');
		putchar(password[m] + '0');

		if ((2772 - sum) - '0' <  78)
		{
				n = 2772 - sum - '0';
				sum += n;
				putchar(n + '0');
				break;
		}
	}
	return (0);
}
