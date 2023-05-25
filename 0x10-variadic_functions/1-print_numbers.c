#include "variadic_functions.h"
/**
* print_numbers - prints numbers, followed by a new line
* @separator: the string to be printed between no
* @n: number of integers passed to the function
* @...: avariable number of number s to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i; /* i = index */

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
