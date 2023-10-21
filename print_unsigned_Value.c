#include "main.h"
/**
 * printf_int - This prints the integer.
 * @val: argument to print.
 * Return: the length of the string.
 */

int print_unsigned_Value(va_list val)
{
	unsigned int y = va_arg(val, unsigned int);
	int num, final = y % 10, digit, exp = 1;
	int j = 1

	y = y / 10;
	num = y;

	if (last < 0)
	{
	_putchar('-');
                num = -num;
                y = -y;
                final = -final;
                j++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num /10;
                }
                num = y;
                while (exp > 0)
                {
                        digit = num /exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp /10;
                        j++;
                }
        }
        _putchar(final + '0');

        return (j);

