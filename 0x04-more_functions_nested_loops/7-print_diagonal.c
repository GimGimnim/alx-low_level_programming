#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Length of the line (in lines)
 */
void print_diagonal(int n)
{
	int x, y;

	if (n < 1)
		_putchar('\n');

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
