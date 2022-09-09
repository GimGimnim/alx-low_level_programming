#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 8; n++)
	{
		for (m = 1; m <= 8; m++)
		{
			if (m > n)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n != 7 || m != 8)
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
