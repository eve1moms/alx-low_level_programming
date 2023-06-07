#include "main.h"
/**
* if_digit - checks to see if string has a non digit number
* @s: the string
* Return: 0 if non digit is found else 1
*/
int if_digit(char *s)
{
	int p = 0;

	while(s[p])
	{
		if (s[p] < '0' || s[p] > '9')
			return (0);
		p++;
	}
		return (1);
/**
* _strlen - gets string length
* @s: the string
* Return: string length
*/
int _strlen(char *s)
{
	int p = 0;

	while(s[p] != '\0')
		p++;
	return (p);
}
/**
* Error - prints out errors
*/
void Error(void)
{
	printf("Error\n")
	return (98);
}
/**
* main - multiples 2 integers
* @argv: array of arguments
* @argc: number of arrays
* Return: 0
*/
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, p, carry, dig1, dig2, *result, 
	n = 0;
	s1 = argv[1], s2 = argv[2];

	if ( argc != 3 || !if_digit(s1) || !if_digit(s2))
		Error();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;;
	result = malloc(size of (int) * length);
	if (!result)
		return (1);
	for (p = 0; p <= length1; + length2; p++)
		result[p] = 0;
	for (length1 = length1 - 1;
 length1 >= 0; length1--)
	{
		dig1 s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1;
 length2 >= 0; length2--)
		{
			dig2 =
 s2[length2] - '0';
			carry += result[length1 +
 length2 + 1] + (dig1 * dig2);
			result[length1 + length2 + 1]
 = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 +
 length2 + 1] += carry;
	}
	for (p = 0; p < length - 1; p++)
	{
		if (result[p])
			n = 1;
		if (n)
			_putchar(result[p] + '0');
	}
	if (!n)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
