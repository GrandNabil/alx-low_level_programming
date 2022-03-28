#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: the character to locates
 * @s: the string where to find
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
		{
			return s;
		}
	} while (*s++) ;
	
	return NULL;
}
