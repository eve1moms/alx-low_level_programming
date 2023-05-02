#include "main.h"
/**
* rev_string - it reverses a string
* @s: the string
*/

void rev_string(char *s)
{
	char reverse = s[0];
	int count = 0;
	int n;

	while (s[count] != '\0')
	count++;

	for (n = 0; n < count; n++)
	{
		count--;
		reverse = s[n];
		s[n] = s[count];
		s[count] = reverse;
	}
}
