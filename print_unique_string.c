#include "main.h"
/**
 * print_unique_string -To print the unique string
 * @oval:The value to print
 * Return: The number of characters printed
 */

int print_unique_string(va_list oval)
{
	char *c;
	int j; length = 0;
	int val;

	c = va_arg(oval, char *);
	if (c == NULL)
		c = "(NULL)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (c[j] < 32 || c[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = c[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_hexa_add(value);
		}
		else
		{
			_putchar(c[j];
			length++;
		}
	}
	return (length);
}
