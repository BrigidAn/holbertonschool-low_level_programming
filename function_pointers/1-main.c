#include <stdio.h>
#include "function_pointers.h"

/**
 * printelem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void printelem(int elem)
{
	printf("%d\n", elem);
}

/**
 * printelemhex - prints an integer in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void printelemhex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	/* Print array elements in decimal */
	array_iterator(array, 5, &printelem);

	/* Print array elements in hexadecimal */
	array_iterator(array, 5, &printelemhex);

	return (0);
}
