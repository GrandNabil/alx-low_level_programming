#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase;
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	i = 0;
	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
		_putchar(alph);
		alph++;
		}
	_putchar('\n');
	}
}
