#include "main.h"
/**
* helperfunction - return 1 if prime else 0
* @num: the number
* @i: iteration times
* Return: 1 if orime else 0
*/
int helperfunction(int num, int i)
{
	if (i < num)
		if (num % i == 0)
			return (0);
		else
			return (helperfunction(num, i + 1));
	else
		return (1);
}
/**
* is_prime_number - checks if number is prime or not
* @n: the numer
* Return: 1 if prime 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helperfunction(n, 2));
}
