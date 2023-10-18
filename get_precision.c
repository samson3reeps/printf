#include "main.h"

/**
 * get_precision - Calculate the precision for printing.
 * @format: The formatted string.
 * @i: Index in the format string.
 * @list: List of arguments to be printed.
 *
 * Return: The precision value, or -1 if not specified.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;  /* Default precision is -1 (not specified) */

	if (format[curr_i] != '.')
		return precision;

	precision = 0;  /* Initialize precision to zero */

	/* Loop through the characters after the dot to calculate precision */
	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			/* Update precision based on digits */
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			/* Precision is a '*' (asterisk), retrieve it from the argument list */
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
		{
			/* If not a digit or '*', exit the loop */
			break;
		}
	}

	*i = curr_i - 1;  /* Update the index to the current position in the format string */

	return precision;
}
