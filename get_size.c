#include "main.h"

/**
 * get_size - Calculate the size to cast the argument.
 * @format: The formatted string.
 * @i: Index in the format string.
 *
 * Return: The size value based on format specifier.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	/* Check for size specifiers 'l' and 'h' */
	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	/* Update the index based on whether a size specifier was found */
	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return size;
}
