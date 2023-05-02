#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: the string
*/

void print_rev(char *s)
{
	int n, m = 0;

	while (s[m] != '\0')
	m++;

	for (n = m - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
