#include "main.h"
/**
 * binary_to_uint - funation that converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int converted_num = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		converted_num = 2 * converted_num + (b[p] - '0');
	}
	return (converted_num);
}
