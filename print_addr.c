#include "main.h"

/**
 * print_addr - Print a value in its hexadecimal representation.
 * @oval: The value to be converted.
 * Return: The number of characters printed.
 */
int print_addr(va_list oval)
{
        void *h = va_arg(oval, void *);
        char *c = "(nil)";
        long int b;
        int j = 0;

        if (h == NULL)
        {
                while (c[j] != '\0')
                {
                        _putchar(c[j]);
                        j++;
                }
                return j;
        }

        b = (unsigned long int)h;
        _putchar('0');
        _putchar('x');
        return print_hex_dec(b);
}
