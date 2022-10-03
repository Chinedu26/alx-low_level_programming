#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: the string whose length is to be calculated
 * Return: the  length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}
	return (len);
}
