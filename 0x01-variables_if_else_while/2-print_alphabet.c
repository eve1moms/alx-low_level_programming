#include <stdio.h>
/**
 * main - prints out alphabets
 * Return: shou return 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
