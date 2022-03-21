#include "main.h"
#include <stdlib.h>

/**
 * main - writes a function that takes a pointer to an int as parameter and updates the value it points to to 98
 */

int main(void)
{
	int var = 98;
	int *n;
	n = &var;

	printf("Value of *n variable: %d\n", *n);
	return (0);
}
