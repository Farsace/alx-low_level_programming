#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: return 0 if big endian, return 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
