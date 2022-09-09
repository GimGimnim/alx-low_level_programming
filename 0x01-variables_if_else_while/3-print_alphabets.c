#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char bd;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (bd = 'A'; bd <= 'Z'; bd++)
	{
		putchar(bd);
	}
	putchar('\n');
	return (0);
}
