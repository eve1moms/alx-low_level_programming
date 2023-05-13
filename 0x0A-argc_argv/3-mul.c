#include"main.h"
#include<stdio.h>
/**
* _atoi - program that multiplies two numbers.
* @s: the string
* Return: 0
*/
int _atoi(char *s)
{
	int m = 0, n = 0, o = 0, len = 0, p = 0, digit = 0;

	while (s[len] != '\0')
	len++;

	while (m < len && p == 0)
	{
		if (s[m] == '-')
			++n;
		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (n % 2)
				digit = -digit;
			o = o * 10 + digit;
			p = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			p = 0;
		}
		m++;
	}
	if (p == 0)
		return (0);
	return (n);
}
/**
* main - multiplies two numbers
* @argv: array of numbers
* @argc: number of arrays
* Return: 1 error 0 success
*/
int main(int argc, int *argv[])
{
	int outcome, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	outcome = n1 * n2;

	printf("%d\n", outcome);
	return (0);
}
