#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);  /* Test positive number */
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(0);   /* Test zero */
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(0xff);  /* Test positive hexadecimal number */
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(-1);  /* Test negative number */
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    
    return (0);
}
