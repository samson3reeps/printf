#include "main.h"
/**
 * _strlength -This returns the length of a string.
 * @strl: String pointer
 * *Return: 1
 */
int _strlength(char *strl)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;
	return (j);
}
/**
 * _strlengths -strlength function but applied for constant char pointer str
 * @str: char pointer
 * Return: 1
 */
int _strlenc(const char *str)
{
	int j;

	for (j = 0; str[j] != 0; i++)
		;
	return (i);
}
