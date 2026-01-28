#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * main - check the malloc_checked function
 *
 * Return: Always 0
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    /* Allocate memory using malloc_checked */
    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);

    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);

    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);

    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);

    /* Free allocated memory */
    free(c);
    free(i);
    free(f);
    free(d);

    return (0);
}
