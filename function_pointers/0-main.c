#include <stdio.h>
#include "function_pointers.h"

/**
 * printnameasis - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void printnameasis(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * printnameuppercase - prints a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void printnameuppercase(char *name)
{
	unsigned int i = 0;

	printf("Hello, my uppercase name is ");
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			putchar(name[i] - 'a' + 'A');
		else
			putchar(name[i]);
		i++;
	}
	putchar('\n'); /* finish the line */
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", printnameasis);
	print_name("Bob Dylan", printnameuppercase);

	return (0);
}
