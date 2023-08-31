#include "main.h"
/**
 * print_binary - Prints Binary representation of decimal
 * @n: num to Print in Binary
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int result;

	for (k = 63; k >= 0; k--)
	{
		result = n >> k;

		if (result & 1)
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
