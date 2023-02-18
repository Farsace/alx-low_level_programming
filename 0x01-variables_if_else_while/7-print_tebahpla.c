#include <stdio.h>

/**
 * main - Prints the alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i >= 26; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
