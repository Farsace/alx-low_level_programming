#include "main.h"

/**
 * print_sign - Determines if the input number greater than,
 * equal to or less than zero.
 *
 * @n: parameter as an integer
 *
 * Return: 1 if greater than zero, 0 if its equal to  zero,
 * -1 if its less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
