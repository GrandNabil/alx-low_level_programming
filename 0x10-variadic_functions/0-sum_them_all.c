#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list prm;

	va_start(prm, n);

	if (n != 0)
		for (i = 0; i < n; i++)
			sum += va_arg(prm, int);

	va_end(prm);

	return (sum);
}
