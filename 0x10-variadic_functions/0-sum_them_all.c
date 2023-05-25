#include "variadic_functions.h"
/**
* sum_them_all -  function that returns the sum of all its parameters.
* @n: no of parameters passed to the function
* @...:  number of parameters to calculate the sum of
* Return: 0 if n == 0 else reeturn sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int p, sum = 0;

	va_start(ap, n);

	for (p = 0; p < n; p++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
