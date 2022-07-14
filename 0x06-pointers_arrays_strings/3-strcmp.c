#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first str
 * @s2: secomd str
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}
