#include "main.h"

/**
 * puts2 - Prints every other character in a string.
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Secu
