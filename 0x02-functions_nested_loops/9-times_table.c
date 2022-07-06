#include "main.h"
/**
 * times_table - prints times table up to 9
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
				_putchar(z + '0');
			if (y != 0 && z < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
