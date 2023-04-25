#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercas
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
