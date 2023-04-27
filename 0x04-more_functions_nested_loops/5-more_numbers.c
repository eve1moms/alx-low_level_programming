#include "main.h"
/**
* more_numbers - printas numbers ten times
*/

void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
