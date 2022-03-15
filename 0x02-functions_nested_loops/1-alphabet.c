#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a new line
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
