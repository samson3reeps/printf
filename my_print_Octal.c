#include "main.h"
#include <stdlib.h>

/**
 * my_print_Octal - Convert a value to its octal representation
 * @val: The value to be converted
 * Return: The count of characters printed
 */

int my_print_Octal(va_list val)
{
    int j, tally = 0;
    int *array;
    unsigned int number = va_arg(val, unsigned int);
    unsigned int temp = number;

    while (number / 8 != 0)
    {
        number = number / 8;
        tally++;
    }
    tally++;
    array = (int *)malloc(sizeof(int) * tally);
    if (array == NULL) /* Check if malloc succeeded */
    {
        return (-1); /* Return an error code (e.g., -1) to indicate failure */
    }

    for (j = 0; j < tally; j++)
    {
        array[j] = temp % 8;
        temp = temp / 8;
    }
    for (j = tally - 1; j >= 0; j--) /* Fix the loop condition (tally - 1) */
    {
        _putchar(array[j] + '0');
    }

    free(array);
    return (tally);
}
