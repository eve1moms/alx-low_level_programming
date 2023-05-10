#include "main.h"
/**
* length_of_str -checks for length of the string
* @s: the string
* Return: length of string
*/
int length_of_str(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length_of_str(s + 1));
}
/**
* checker - checks if str is palidrome
* @n: the index
* @l: length of string
* @s: the str
* Return: 1 if palidrome else 0
*/
int checker(int n, int l, char *s)
{
	if (l > 0)
	{
		if (s[n] == s[l])
			return (checker(n + 1, l - 1, s));
		else if (s[n] != s[l])
			return (0);
		else
			return (1);
	}
	return (1);
}
/**
* is_palindrome - checks if strg is palindrome
* @s: the strg
* Return: 1 if palindrome else 0;
*/
int is_palindrome(char *s)
{
	return (checker(0, length_of_str(s) - 1, s));
}
