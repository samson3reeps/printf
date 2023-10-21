#include "main.h" 

/**
 * print_Reverse - This is the function that prints a string in reverse
 * @oval: This is an arguments
 * Return: This returns the string 
 */
int print_reverse(va_list oval)
{

	char *c = va_arg(val, char*);
	       int j;
	       int k; = 0;

	       if (c == NULL)
		       c = "(null)";
	       while (c[k] != '\0')
		       k++;
	       for (j = k -1; k >= 0; j--)
		       _putchar(c[j]);
	       return (k);
