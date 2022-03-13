#include <stdio.h>

/**
 * main - prints the lower case alphabet in reserve,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
