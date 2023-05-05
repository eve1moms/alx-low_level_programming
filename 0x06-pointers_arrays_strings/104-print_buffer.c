#include "main.h"
#include <stdio.h>
/**
* print_buffer - function that prints a buffer.
* @b: the buffer
* @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int n = 0, m, o;

	if (size <= 0)
		printf("\n");
	while (n < size)
	{
		m  = size - n < 10 ? size - n : 10;
		printf("%08x:", n);
		for (o = 0; o < 10; o++)
		{
			if (o < m)
				printf("%02x", *(b + n + o));
			else
				printf(" ");
			if (o % 2)
				printf(" ");
		}
		for (o = 0; o < m; o++)
		{
			int p = *(b + n + o);

			if (p < 32 || p > 132)
			{
				p = '.';
			}
			printf("%d", p);
		}
		printf("\n");
		n += 10;
	}
}
