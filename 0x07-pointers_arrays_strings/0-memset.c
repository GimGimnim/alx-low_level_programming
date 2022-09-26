#include "main.h"

**
 * _memset - fills memory with a constant byte
 * @s: starting point
 * @b: constant byte to fill with
 * @n: number of bytes of memory to fill
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
