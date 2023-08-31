#include "main.h"
/**
 * get_endianness - Function checks endianness
 * Return: 0 if big endian else if little endian 1
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
