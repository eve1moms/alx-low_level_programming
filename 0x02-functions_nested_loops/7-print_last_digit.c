#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @c: last digit of a number
 * Return: last digit of the number
 */
int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
