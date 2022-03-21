#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: the int to swap by b
 * @b: the int to swap by a
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
