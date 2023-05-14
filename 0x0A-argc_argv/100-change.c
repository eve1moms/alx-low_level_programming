#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
* main - prints min num of coins
* @argc: num of arguments
* @argv number of arrays
* Return: 1 if error else 0
*/

int main(int argc, char *argv[])
{
	int n, m, outcome; /*n = number*/

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	return (0);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && n >= 0; m++)
	{
		while (n >= coins[m])
		{
			outcome++;
			n -= coins[m];
		}
	}
	printf("%d\n", outcome);
	return (0);
}
