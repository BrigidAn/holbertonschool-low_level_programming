#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase, followed by a new line.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
    int i;
    char letter;

    for (i = 0; i < 10; i++)  /* Repeat 10 times */
    {
        for (letter = 'a'; letter <= 'z'; letter++)  /* Print the alphabet */
        {
            _putchar(letter);
        }

        _putchar('\n');  /* Print newline after each iteration */
    }
}
