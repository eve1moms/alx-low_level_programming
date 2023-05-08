#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two
* diagonals of a square matrix of integers
* @a: matrix of integers
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0; /* i = index,s1 = sum of 1, s2 = sum of 2*/

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
