#include "main.h"
/**
 * set_bit -  Set value of Bit to 1 at given index
 * @n: Pointer 2 num
 * @index: Index of Bit to be set to 1
 * Return: 1 ON success, -1 ON failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
