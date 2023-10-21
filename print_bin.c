#include "main.h"

int  print_bin(va_list val)
{
	int flag_Bit = 0;
	int char_Count = 0;
	int j, b = 1, a;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int y;

	for j = 0; j < 32; j++)
	{ 
		y = ((b << (32 - j)) & num);
		if (y >> (31 - j))
			flag_Bit = 1;
		if (flag_Bit)
		{
			a = y >> (31 - j);
			_putchar(a + 48);
			char_Count++;
		}
	}
	if (char_Count == 0)
	{
		char_Count++;
		_putchar('0')  ;
	}
	return (char_Count);
}

