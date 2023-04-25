#include "main.h"
/**
 * _islower -  checks for lowercase character
 * @c: character to be checked
 * Return: 1 for lower case 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
