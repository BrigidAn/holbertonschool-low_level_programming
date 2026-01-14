#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++)  /* Loop through rows */
    {
        for (j = 0; j < 10; j++)  /* Loop through columns */
        {
            result = i * j;

            if (j == 0)
            {
                _putchar('0' + result);  /* Print the first number */
            }
            else
            {
                _putchar(',');  /* Print comma separator */
                _putchar(' ');  /* Print space between numbers */

                if (result < 10)  /* Add extra space for single-digit numbers */
                {
                    _putchar(' ');
                }
                _putchar('0' + result);  /* Print result */
            }
        }
        _putchar('\n');  /* Move to the next line after each row */
    }
}
