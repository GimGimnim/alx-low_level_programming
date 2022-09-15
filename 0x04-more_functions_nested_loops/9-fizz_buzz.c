#include <stdio.h>

/**
 * main - Prints 1 to 100, muliples of 3 and 5 are replaced with Fizz and Buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
