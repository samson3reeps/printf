#include "main.h"

/**
 * custom_printf_string - Print a string.
 * @val: Argument list.
 * Return: The length of the string.
 */
int custom_printf_string(va_list val)
{
    char *str;
    int i;
    int length = 0;

    str = va_arg(val, char *);

    if (str == NULL)
    {
        str = "(null)";
    }

    while (str[length] != '\0')
    {
        _putchar(str[length]);
        length++;
    }

    return length;
}
