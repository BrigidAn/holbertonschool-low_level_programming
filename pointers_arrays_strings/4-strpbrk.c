#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search through.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: Pointer to the first occurrence of any byte in accept,
 *         or NULL if no byte from accept is found in s.
 */
char *_strpbrk(char *s, char *accept)
{
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                return (s);
            }
        }
        s++;
    }

    return (NULL);
}
