#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
* @c: the digits
* Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
