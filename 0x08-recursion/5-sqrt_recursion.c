#include "main.h"
/**
* helperfunction - checks if sqrt of number exists
* @i: the number to be checked
* @p: possible sqrt of number
* Return: the square root of number
*/
int helperfunction(int i, int p)
{
	if ((p * p) == i)
	{
		return (p);
	}
	else
	{
		if ((p * p) > i)
			return (-1);
		else
			return (helperfunction(i, p + 1));
	}
}
/**
* _sqrt_recursion - returns sqrt of a number
* @n: the number
* Return:1 if thers a sqrt of a number else 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
