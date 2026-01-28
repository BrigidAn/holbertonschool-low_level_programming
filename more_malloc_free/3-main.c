#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hex
 * @buffer: address of memory to print
 * @size: number of elements
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
	}
	printf("\n");
}

/**
 * main - test array_range
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	if (a == NULL)
		return (1);

	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
