#include "main.h"
/**
 * binary_to_uint - convert  binary num to unsigned int
 * @b: str containing binary num
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[k] - '0');
	}

	return (decimal_value);
}
