#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Calculate length of s1 manually */
    if (s1 != NULL)
        while (s1[len1])
            len1++;

    /* Calculate length of s2 manually */
    if (s2 != NULL)
        while (s2[len2])
            len2++;

    /* If n is bigger than s2, use full s2 */
    if (n > len2)
        n = len2;

    /* Allocate memory for new string */
    new_str = malloc(len1 + n + 1);
    if (new_str == NULL)
        return (NULL);

    /* Copy s1 */
    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];

    /* Copy first n bytes of s2 */
    for (j = 0; j < n; j++)
        new_str[i + j] = s2[j];

    /* Null terminate */
    new_str[i + j] = '\0';

    return (new_str);
}
