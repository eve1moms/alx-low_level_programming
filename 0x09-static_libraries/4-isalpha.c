#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter 0 if it is anything else
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
