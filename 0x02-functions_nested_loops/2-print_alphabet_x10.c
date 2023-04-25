#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase,
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 97; m <= 122; m++)
			_putchar(m);
		_putchar('\n');
	}
}
