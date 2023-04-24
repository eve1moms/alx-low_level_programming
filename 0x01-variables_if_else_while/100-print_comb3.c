#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int n;
	int N;

	for (n =48; n <= 56; n++)
	{
		for (N = 49;  N <= 57; N++)
		{
			if (N > n)
			{
				putchar(n);
				putchar(N);
				if (n != 56 || N != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
