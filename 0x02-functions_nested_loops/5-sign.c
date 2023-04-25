#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 * @n: the int to check
 * Return: 1 for positive number, -1 if negative 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
