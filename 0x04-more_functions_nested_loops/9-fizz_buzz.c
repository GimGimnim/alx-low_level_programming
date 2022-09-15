#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char c;

	i = 1;

	while(i = 1, i < 100, i++)
	{
		if(i % 3 == 0)
		{
			_putchar('Fizz');
			_putchar(' ');
		}
		else if(i % 5 == 0)
		{
			_putchar('Buzz');
			_putchar(' ');
		}
		else if(1 % 15 == 0)
		{
			_putchar('FizzBuzz');
			_putchar(' ');
		}
		else
		{
			_putchar('i');
			_putchar(' ');
		}
	}

	return (0);
}
