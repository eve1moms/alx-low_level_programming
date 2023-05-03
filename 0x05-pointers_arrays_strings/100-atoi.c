#include "main.h"
/**
* _atoi - onvert a string to an integer.
* @s: the string
* Return: integer
*/

int _atoi(char *s)
{
	int m, i, n, len, j, digit;

	m = 0;
	i = 0;
	j = 0;
	len = 0;
	n = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		if (s[m] == '-')
			i++;
		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (i % 2)
				digit = -digit;
			n = n * 10 + digit;
			j = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			j = 0;
		}
		m++;
	}
	if (j == 0)
		return (0);

	return (n);
}
