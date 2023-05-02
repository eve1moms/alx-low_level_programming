#include "main.h"
/**
* swap_int - swaps values of two integers
* @a: int 1
* @b: int 2
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
