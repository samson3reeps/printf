#include "main.h"
/**
 * print_hexadecimal - Print a value in its hexadecimal representation.
 * @oval: The value to be converted.
 * Return: tally.
 */


 int print_hexa_add(unsigned int number)
{
        int j, tally = 0;
        int *array;
        unsigned int temp = number;

        while (number / 16 != 0)
        {
                number = number / 16;
                tally++;
        }
        tally++;
        array = malloc(sizeof(int) * tally);
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
