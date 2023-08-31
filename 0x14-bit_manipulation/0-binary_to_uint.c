#include "main.h"
/**
 * binary_to_uint - convert  binary num to unsigned int
 * @b: str containing binary num
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[p] - '0');
	}

	return (decimal_value);
}
