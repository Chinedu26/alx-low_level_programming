#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurence to the character c in string s,
 * or null if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *flag = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				flag = s;
				break;
			}
		} while (*s++);
	}
	return (flag);
}
