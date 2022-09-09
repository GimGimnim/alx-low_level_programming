#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf(" and is greater than %d\n", n = 5);
	else if (n % 10 == 0)
		printf(" and is %d\n", n = 0);
	else
		printf(" and is less than %d and not %d\n", 6, 0);
	return (0);
}
