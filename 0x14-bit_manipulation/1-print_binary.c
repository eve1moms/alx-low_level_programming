#include "main.h"
/**
 * print_binary - function that prints the
 * binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int now;

	for (p = 63; p >= 0; p--)
	{
		now = n >> p;

		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
