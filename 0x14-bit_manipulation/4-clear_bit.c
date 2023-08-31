#include "main.h"
/**
 * clear_bit - Set value of a Bit to 0 at  given index
 * @n: Pointer to num
 * @index: Index of Bit to clear
 * Return: 1 ON  success else ON fail retuen -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n &= ~(1UL << index);
	return (1);
}
