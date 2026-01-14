#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter (lowercase), 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')  /* Check if the character is lowercase */
    {
        return (1);  /* Return 1 if lowercase */
    }
    else
    {
        return (0);  /* Return 0 if not lowercase */
    }
}
