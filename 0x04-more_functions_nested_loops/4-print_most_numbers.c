#include "main.h"
/**
* print_most_numbers - prints numbers excpt for2,4
*/

void print_most_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
}
