#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line. Does not use char type. Uses only putchar twice.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');

	putchar('\n');

	return (0);
}
