#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the function that calcualtes the sum
 * @n: number of arguments
 * Return: the sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum;
	unsigned int i;
	unsigned int x;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}

