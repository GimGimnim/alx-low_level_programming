#include <stdio.h>


int main(void)
{
	int n;
	char bd;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}

	for (bd = 'a'; bd <= 'g'; bd++)
	{
		putchar(bd);
	}
	putchar('\n');
	return (0);
}
