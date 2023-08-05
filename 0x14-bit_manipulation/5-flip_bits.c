#include "main.h"
/**
 * flip_bits - hat calculates the number of bits that need
 * to be changed in one number to make it equal to another number
 * @n: first number
 * @m: second number
 * Return: number of bits to change
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
