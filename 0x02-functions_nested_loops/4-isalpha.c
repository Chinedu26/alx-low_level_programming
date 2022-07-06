#include "main.h"
/**
 * _isalpha - check if c is a letter, upper or lowercase
 * @c - character to be checked if alpha
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
