#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: the character to locates
 * @s: the string where to find
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return s;
		}
		*s++;
	}

	return (NULL);
}
