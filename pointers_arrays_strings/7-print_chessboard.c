#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Description: The function prints a chessboard, where each row
 * represents a line of chess pieces, and each character is a piece
 * or an empty space. A newline is printed at the end of each row.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)  /* Loop through each row */
    {
        for (j = 0; j < 8; j++)  /* Loop through each column in the row */
        {
            _putchar(a[i][j]);  /* Print the character (piece or empty space) */
        }
        _putchar('\n');  /* Print a new line after each row */
    }
}
