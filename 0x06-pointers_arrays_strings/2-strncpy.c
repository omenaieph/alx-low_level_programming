#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The max number of bytes to copied from src.
 *
 * Return: A pointer to the outputed string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] && i < n)
{
dest[i] = src[i];
i++;
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
