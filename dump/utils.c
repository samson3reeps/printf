#include "main.h"

/**
 * is_printable - Check if a character is printable.
 * @c: The character to be evaluated.
 *
 * Return: 1 if the character is printable, 0 otherwise.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ASCII in hexadecimal format to the buffer.
 * @buffer: The character array.
 * @i: The index to start appending.
 * @ascii_code: The ASCII code.
 *
 * Return: Always returns 3.
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	/* The hexadecimal format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Check if a character is a digit.
 * @c: The character to be evaluated.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Cast a number to the specified size.
 * @num: The number to be cast.
 * @size: A number indicating the type to cast to.
 *
 * Return: The casted value of num.
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Cast an unsigned number to the specified size.
 * @num: The number to be cast.
 * @size: A number indicating the type to cast to.
 *
 * Return: The casted value of num.
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
