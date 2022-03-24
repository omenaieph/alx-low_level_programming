#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: max number of bytes to use
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int len_, i = 0;

for (len_ = 0; dest[len_]; len_++)
;
while (src[i] && i < n)
{
dest[len_++] = src[i];
i++;
}

return (dest);
}
