#include <stdio.h>


int main(void)
{
	char ch;
	char bd;

	for (ch = 'a'; ch <= 'z' && ch != 'q' && ch != 'e'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
