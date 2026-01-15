#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * You can only use _putchar three times.
 */
void more_numbers(void)
{
	int line, num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0'); /* tens digit */
			_putchar((num % 10) + '0');     /* ones digit */
		}
		_putchar('\n');
	}
}
