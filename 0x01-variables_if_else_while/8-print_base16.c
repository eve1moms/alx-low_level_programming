#include <stdio.h>
/**
 * main - that prints all the numbers of base 16 in lowercase
 * Return: always 0
 */
int main(void)
{
	int n;
	int N;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (N = 97; N <= 102; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
