#include "main.h"
/**
* puts_half - prints half of a string
* @str: the string
*/

void puts_half(char *str)
{
	int n, m = 0; /* n = half the string , m = full string*/

	while (str[m] != '\0')
	{
		m++;
	}
	n = m / 2;

	if (m % 2 == 1)
		n++;
	while (n < m)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
