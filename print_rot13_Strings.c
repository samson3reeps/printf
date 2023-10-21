#include "main.h"
/**
 * print_rot13_Strings - Print a string in rot13
 * @oval: arguments
 * Return: tally
 *
 */
int print_rot13_Strings(va_list oval)
{
	int j, k, tally = 0;
	int y = 0;
	char *c =va_arg(val, char*);
	char a[] = {'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (c == NULL)
		c = "(null)";
	for (j = 0; c[j]; j++)
	{
		y = 0;
		for (k = 0; a[k] && !y; k++)
		{
			if (c[j] == a[k])
			{
				_putchar(b[k]);
				tally++;
			y = 1;
			}
		}
		if (!y)
		{
			_putchar(c[j]);
			tally++;
		}
	}
	return (tally);
}	
