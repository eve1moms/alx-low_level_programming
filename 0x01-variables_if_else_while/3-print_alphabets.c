#include<stdio.h>
/**
 * main - prints alphabets in upper and lowercas
 * Return: always 0
 */
int main(void)
{
	int n = 95;
	int N = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (N <= 90)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
