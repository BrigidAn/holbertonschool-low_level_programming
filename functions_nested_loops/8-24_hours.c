#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59.
 *
 * Return: Nothing (void).
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');  /* Print tens place of hour */
			_putchar((hour % 10) + '0');  /* Print ones place of hour */
			_putchar(':');
			_putchar((minute / 10) + '0');  /* Print tens place of minute */
			_putchar((minute % 10) + '0');  /* Print ones place of minute */
			_putchar('\n');
		}
	}
}
