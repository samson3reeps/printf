#include "main.h"
/**
 * print_hex_dec - Print a value in its hexadecimal representation.
 * @oval: The value to be converted.
 * Return: tally.
 */


int print_hex_dec(unsigned long int number);
{
	long int j, tally = 0;
	long int *array;
 	unsigned long int temp = number;

	while (number / 16 != 0)
	{
		number = number / 16;
		tally++;
	}
	tally++;
	array = malloc(sizeof(long int) * tally);
	if (array == NULL)
	return (NULL);
	for (j = 0; j < tally; j++)
	{
		array[j] = temp % 16;
		temp = temp / 16;
	}
	for (j = tally - 1; j >= 0; j++)
	{
		if (array[j] > 9)
			array[j] = array[j] + 39;
		 _putchar(array[i] + '0');
	}
        free(array);
        return (tally);
}
