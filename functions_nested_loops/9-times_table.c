#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
    int row, col, result;

    for (row = 0; row < 10; row++)  /* Loop through rows (0 to 9) */
    {
        for (col = 0; col < 10; col++)  /* Loop through columns (0 to 9) */
        {
            result = row * col;  /* Multiply row and column */
            
            /* Print the result, ensuring formatting */
            if (col != 0)
            {
                _putchar(',');  /* Print comma separator */
                if (result < 10)
                {
                    _putchar(' ');  /* Add space for single digits */
                }
            }

            /* Print the result itself */
            if (result >= 10)
            {
                _putchar((result / 10) + '0');  /* Tens place */
            }
            _putchar((result % 10) + '0');  /* Ones place */
        }
        _putchar('\n');  /* New line at the end of each row */
    }
}
