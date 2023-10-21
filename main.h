#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*g)();
} authenticate;

int print_reverse(va_list val);
int custom_printf_char(va_list arguments);
int _putchar(char c);
int _printf(const char *format, ...);
int custom_printf_string(va_list val);
int _strlength(char *strl);
int _strlenc(const char *str);
int print_20(void);
int print_deci(va_list val);
int print_int(va_list val);
int print_bin(va_list val);
int print_unsigned_Value(va_list val);
int my_print_Octal(va_list val);
int print_hexadecimal(va_list val);
int print_hexa_add(unsigned int number);
int print_unique_string(va_list val);
int print_addr(va_list val);
int print_hex_dec(unsigned long int number);
int print_rot13_Strings(va_list val);

#endif
