#include "main.h"
#include <stdio.h>
/**
* print_array - n elements of an array of integers
* @n: number of elements to be printed
* @a: the input
*/

void print_array(int *a, int n)
{
	int c;/* elements in the array*/

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
