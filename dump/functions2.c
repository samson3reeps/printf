#include "main.h"
#include <string.h>

/****************** PRINT POINTER ******************/

/**
 * print_pointer - Prints the value of a pointer variable
 * @types: List of arguments
 * @buffer: Buffer array for printing
 * @flags: Active flags calculation
 * @width: Width specifier
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    char extra_c = 0, padding = ' ';
    int index = BUFF_SIZE - 2, length = 2, padding_start = 1; /* length = 2, for '0x' */
    unsigned long address;
    char mapping[] = "0123456789abcdef";
    void *pointer = va_arg(types, void *);

    UNUSED(width);
    UNUSED(size);

    if (pointer == NULL)
        return write(1, "(nil)", 5);

    buffer[BUFF_SIZE - 1] = '\0';
    UNUSED(precision);

    address = (unsigned long)pointer;

    while (address > 0)
    {
        buffer[index--] = mapping[address % 16];
        address /= 16;
        length++;
    }

    if ((flags & F_ZERO) && !(flags & F_MINUS))
        padding = '0';
    if (flags & F_PLUS)
        extra_c = '+', length++;
    else if (flags & F_SPACE)
        extra_c = ' ', length++;

    index++;

    return write_pointer(buffer, index, length, width, flags, padding, extra_c, padding_start);
}

/************************* PRINT NON PRINTABLE *************************/

/**
 * print_non_printable - Prints ASCII codes in hexadecimal of non-printable characters
 * @types: List of arguments
 * @buffer: Buffer array for printing
 * @flags: Active flags calculation
 * @width: Width specifier
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_non_printable(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    int i = 0, offset = 0;
    char *str = va_arg(types, char *);

    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);

    if (str == NULL)
        return write(1, "(null)", 6);

    while (str[i] != '\0')
    {
        if (is_printable(str[i]))
            buffer[i + offset] = str[i];
        else
            offset += append_hexa_code(str[i], buffer, i + offset);

        i++;
    }

    buffer[i + offset] = '\0';

    return write(1, buffer, i + offset);
}

/************************* PRINT REVERSE *************************/
/**
 * print_reverse - Prints a reverse string.
 * @types: List of arguments
 * @buffer: Buffer array for printing
 * @flags: Active flags calculation
 * @width: Width specifier
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_reverse(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    char *str = va_arg(types, char *);
    int i = 0;

    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);

    if (str == NULL)
        str = "(null)";

    while (str[i])
    {
        i++;
    }

    while (i > 0)
    {
        i--;
        buffer[i] = str[i];
    }

    return (write(1, &buffer[i], i));
}

/************************* PRINT A STRING IN ROT13 *************************/

/**
 * print_rot13string - Encodes a string using ROT13
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 *
 * Return: Number of printed chars.
 */
int print_rot13string(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    char *str = va_arg(types, char *);
    char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    unsigned int i, j;
    char x;
    int count = 0;

    for (i = 0; str[i]; i++)
    {
        for (j = 0; in[j]; j++)
        {
            if (str[i] == in[j])
            {
                x = out[j];
                write(1, &x, 1);
                count++;
                break;
            }
        }
        if (!in[j])
        {
            x = str[i];
            write(1, &x, 1);
            count++;
        }
    }
    return (count);
}

