#include <stdio.h>
#include <stdlib.h>

/** main - prints the alphapbet in lower case,
 * then in uppercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <='z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <='Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
