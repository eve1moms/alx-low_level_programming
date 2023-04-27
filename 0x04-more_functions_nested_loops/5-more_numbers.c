#include "main.h"
/**
* more_numbers - printas numbers ten times
*/

void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar('1');
			}
			_putchar(m % 10 + '0');
		}
	}
	_putchar('\n');
}
