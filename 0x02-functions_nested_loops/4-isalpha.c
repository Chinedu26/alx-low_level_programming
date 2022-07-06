#include "main.h"
/**
 * _isalpha - check if c is a letter, upper or lowercase
 * @c - character to be checked if alpha
 * Return: 1 if letter, upper or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
