#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')  /* Loop from 'a' to 'z' */
    {
        _putchar(letter);  /* Print each letter */
        letter++;  /* Move to the next letter */
    }

    _putchar('\n');  /* Print the newline character */
}
