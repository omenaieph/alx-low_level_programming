#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int intr_ = 0;

	while (str[intr_])
	{
		while (!(str[intr_] >= 'a' && str[intr_] <= 'z'))
			intr_++;

		if (intr_ == 0 ||
			str[intr_ - 1] == ' ' ||
		    str[intr_ - 1] == '\t' ||
		    str[intr_ - 1] == '\n' ||
		    str[intr_ - 1] == ',' ||
		    str[intr_ - 1] == ';' ||
		    str[intr_ - 1] == '.' ||
		    str[intr_ - 1] == '!' ||
		    str[intr_ - 1] == '?' ||
		    str[intr_ - 1] == '"' ||
		    str[intr_ - 1] == '(' ||
		    str[intr_ - 1] == ')' ||
		    str[intr_ - 1] == '{' ||
		    str[intr_ - 1] == '}')
			str[intr_] -= 32;

		intr_++;
	}

	return (str);
}
