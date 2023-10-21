#include "main.h"

/**
 * get_width - Calculate the width for printing.
 * @format: The formatted string.
 * @i: Index in the format string.
 * @list: List of arguments.
 *
 * Return: The width specified in the format string.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		/* Check for digit characters to calculate width */
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			/* If an asterisk is encountered, get width from the argument list */
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	*i = curr_i - 1;

	return width;
}
