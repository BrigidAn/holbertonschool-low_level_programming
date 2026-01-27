#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *h;
    char *n;

    if (*needle == '\0')  /* If needle is an empty string */
    {
        return (haystack);
    }

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')  /* If we have reached the end of needle */
        {
            return (haystack);
        }

        haystack++;
    }

    return (NULL);  /* Return NULL if no match is found */
}
