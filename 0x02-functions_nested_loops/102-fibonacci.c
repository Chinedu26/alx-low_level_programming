#include "main.h"
#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
	int count;
	unsigned long a, b, c;

	a = 0;
	b = 1;
	for (count = 1; count <= 49; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	printf("%lu\n", c + a);
	return (0);
}
