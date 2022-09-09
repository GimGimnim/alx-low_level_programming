#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			if (m > n)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
