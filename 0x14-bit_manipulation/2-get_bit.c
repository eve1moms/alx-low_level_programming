#include "main.h"
/**
 * get_bit - Returnsvalue of Bit at an index in decimal num
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;
	return (bitvalue);
}
