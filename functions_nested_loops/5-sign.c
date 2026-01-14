#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, and -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)  /* If the number is greater than 0 */
	{
		_putchar('+');  /* Print '+' */
		return (1);  /* Return 1 */
	}
	else if (n == 0)  /* If the number is zero */
	{
		_putchar('0');  /* Print '0' */
		return (0);  /* Return 0 */
	}
	else  /* If the number is less than 0 */
	{
		_putchar('-');  /* Print '-' */
		return (-1);  /* Return -1 */
	}
}
