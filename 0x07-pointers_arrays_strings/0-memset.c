#include "main.h"

/**
 **_memset - fill a block memory with specific value
 *@s: statrting address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *
 *Return: changed array with new value of n bytes
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
