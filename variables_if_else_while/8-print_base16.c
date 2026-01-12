#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase,
 * followed by a new line. Uses only putchar three times.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
