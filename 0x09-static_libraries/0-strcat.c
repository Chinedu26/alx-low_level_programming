#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 * Return: a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count1 >= 0)
	{
		*(dest + count) = *(src + count1);
	if (*(src + count1) == '\0')
		break;
	count++;
	count1++;
	}
	return (dest);
}
