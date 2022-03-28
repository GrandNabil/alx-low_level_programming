#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: bytes of the memory area pointed to
 * @s: the memory area to fill
 * @b: the constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0, i < n, i++)
	{
		s[i] = b;
	}

	return (s);
}
