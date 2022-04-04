#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *_copy;
	int i, _len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		_len++;
	}

	_copy = malloc((_len + 1) * sizeof(char));

	if (_copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		_copy[i] = str[i];

	_copy[_len] = '\0';

	return (_copy);

}
