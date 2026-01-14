#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');  /* 'H' is alphabetic, so it should print 1 */
    r = _isalpha('o');
    _putchar(r + '0');  /* 'o' is alphabetic, so it should print 1 */
    r = _isalpha(108);  /* 108 corresponds to 'l', which is alphabetic */
    _putchar(r + '0');  /* Should print 1 */
    r = _isalpha(';');  /* ';' is not alphabetic */
    _putchar(r + '0');  /* Should print 0 */
    _putchar('\n');  /* Print a newline after the results */
    return (0);
}
