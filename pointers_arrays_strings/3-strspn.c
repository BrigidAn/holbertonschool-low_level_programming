#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                count++;
                break;
            }
        }

        if (accept[i] == '\0')
        {
            break;
        }

        s++;
    }

    return (count);
}
