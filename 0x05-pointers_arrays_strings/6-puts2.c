#include "main.h"
/**
* puts2 -  prints every other character of a string
* @str: the string
*/

void puts2(char *str)
{
	int n, m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
