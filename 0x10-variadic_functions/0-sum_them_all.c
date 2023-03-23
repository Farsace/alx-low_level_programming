#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: if n == 0-0.
 * 	Otherwise - the sum of all parameters.
 * 
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list fa;
	unsigned int i; sum = 0;

	if (n == 0)
		return (0);

	va_start(fa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(fa, int);

	va_end(fa);

	return (sum);
}
