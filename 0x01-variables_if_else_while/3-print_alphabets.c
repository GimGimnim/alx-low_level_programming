#include <stdio.h>


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
