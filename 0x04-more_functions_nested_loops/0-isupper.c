#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
