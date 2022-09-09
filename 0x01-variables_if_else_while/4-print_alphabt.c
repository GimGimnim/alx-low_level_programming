#include <stdio.h>


int main(void)
{
	char ch;	

	for (ch = 'a'; ch <= 'z' && ch != 'q' && ch != 'e'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
