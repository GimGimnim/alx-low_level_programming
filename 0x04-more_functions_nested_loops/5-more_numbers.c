#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14, 10 times
 */
void more_numbers(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
				_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}

		_putchar('\n');
	}
}
