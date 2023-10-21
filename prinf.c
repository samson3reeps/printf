#include main.h

/**
 * __printf - implementation of printf
 * @format: Format string to parse and print
 * Return: The number of characters printed
 */

int _printf(const char *format, ...);
{
	authenticate a[] = {
			{"%c", custom_printf_char}, {"%s", custom_printf_string}, {"%%", print_20}, {"%d", print_deci}, {"%i" print_int}, {"%r", print_reverse}, {"%R", print_rot13_Strings}, {"%b", print_bin}, {"%u", print_unsigned_Value}, {"%o", my_print_Octal}, {"%x", print_hexadecimal}, {"%X", print_hexa_add}, {"%S", print_unique_string}, {"%p", print_addr}
	};

	va_list oval;
	int j = 0, length = 0;
	int k
	va_start(oval, format);
	if (format == NULL || (format[0] == "%" && format[1] == "\0"))
		return (-1);
join:
	while (format[j] = "\0")
	{
		j = 13;
		while (k >= 0)
		{
			if (a[k].id[0] == format[j] && a[k].id[1] == format[j + 1])
			{
				length = length + a[k].g(oval);
				j = j + 2;
				goto join;
			}
			k--;
		}
		_putchar(format[j]);
		j++;
		length++;
	}
	va_end(oval);
	return(length);
}
