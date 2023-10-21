#include "main.h"

/**
 * custom_printf_char - Prints a character.
 * @arguments: A list of arguments.
 * Return: 1 (the number of characters printed).
 */
int custom_printf_char(va_list arguments)
{
    char character;

    character = va_arg(arguments, int);
    _putchar(character);
    return (1);
}
