#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: the character to locates
 * @s: the string where to find
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
