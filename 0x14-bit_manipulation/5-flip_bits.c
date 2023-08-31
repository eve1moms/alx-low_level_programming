#include "main.h"
/**
 * flip_bits - That calculates Num of Bits that needs
 * to be changed in one Num 2 make it equal 2 another Num
 * @n: first Num
 * @m: second Num
 * Return: Num of Bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int bit;
	unsigned long int difference = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		bit = difference >> k;
		if (bit & 1)
			count++;
	}

	return (count);
}
