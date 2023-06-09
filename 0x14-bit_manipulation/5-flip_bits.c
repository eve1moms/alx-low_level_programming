#include "main.h"
/**
 * flip_bits -function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		now = exclusive >> p;
		if (now & 1)
			count++;
	}

	return (count);
}
