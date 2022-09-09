#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char bd;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	for (bd = 'a'; bd < 'g'; bd++)
	{
		putchar(bd);
	}
	putchar('\n');
	return (0);
}
