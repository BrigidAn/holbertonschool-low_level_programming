#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The integer whose absolute value is to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);  /* Return the positive equivalent of the number */
	}
	else
	{
		return (n);  /* Return the number as it is if it's positive */
	}
}
