#include "main.h"
/**
 * get_endianness - Function checks endianness
 * Return: 0 if big endian else if little endian 1
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
