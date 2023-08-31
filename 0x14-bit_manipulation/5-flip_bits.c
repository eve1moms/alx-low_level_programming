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
	int p, count = 0;
	unsigned long int bit;
	unsigned long int difference = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		bit = difference >> p;
		if (bit & 1)
			count++;
	}

	return (count);
}
