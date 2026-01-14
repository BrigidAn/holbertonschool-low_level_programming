#include "main.h"

/**
 * test_islower - tests the _islower function.
 *
 * Return: Always 0.
 */
void test_islower(void)
{
    int r;

    r = _islower('o');  /* Test lowercase character 'o' */
    _putchar(r + '0');   /* Should print 1 */

    r = _islower(108);   /* Test ASCII value 108 ('l') */
    _putchar(r + '0');   /* Should print 1 */

    r = _islower('c');   /* Test lowercase character 'c' */
    _putchar(r + '0');   /* Should print 1 */

    r = _islower('I');   /* Test uppercase character 'I' */
    _putchar(r + '0');   /* Should print 0 */

    r = _islower('s');   /* Test lowercase character 's' */
    _putchar(r + '0');   /* Should print 1 */

    r = _islower(70);    /* Test ASCII value 70 ('F') */
    _putchar(r + '0');   /* Should print 0 */

    r = _islower(20);    /* Test non-letter ASCII value 20 */
    _putchar(r + '0');   /* Should print 0 */

    r = _islower('U');   /* Test uppercase character 'U' */
    _putchar(r + '0');   /* Should print 0 */

    r = _islower('n');   /* Test lowercase character 'n' */
    _putchar(r + '0');   /* Should print 1 */

    r = _islower(0);     /* Test ASCII value 0 (NULL character) */
    _putchar(r + '0');   /* Should print 0 */

    r = _islower('H');   /* Test uppercase character 'H' */
    _putchar(r + '0');   /* Should print 0 */

    _putchar('\n');      /* Print a newline */
}

/**
 * main - calls the test_islower function.
 *
 * Return: Always 0.
 */
int main(void)
{
    test_islower();  /* Call the function to test _islower */
    return (0);
}
