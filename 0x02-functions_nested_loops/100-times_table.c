#include "main.h"
/**
 * print_times_table - print times tables up to input
 * Description: writes times table up to input not exceeding 15
 * @n: size of times t5able
 * Return: Nothing
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = b * a;
				if (b == 0)
				{
					_putchar(c + '0');
				} else if (c < 10 && b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				} else if (c >= 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
