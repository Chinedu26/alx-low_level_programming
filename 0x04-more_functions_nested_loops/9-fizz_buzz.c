#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * But for multiples of 3 print Fizz, multiples of 5, print Buzz
 * multiples of both 3 and 5 print FizzBuzz instead of number
 * Return: 0 if successful
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
