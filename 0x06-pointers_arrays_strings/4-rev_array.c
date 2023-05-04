#include "main.h"
/**
* reverse_array -  function that reverses the content of an array of integers
* @a: the array pointer
* @n: elements in the array
*/
void reverse_array(int *a, int n)
{
	int t; /* stores the value at the current index that is going to be reversed*/
	int c; /* counter*/

	n = n - 1;
	c = 0;
	while (c <= n)
	{
		t = a[c];
		a[c++] = a[n];
		a[n--] = t;
	}
}
