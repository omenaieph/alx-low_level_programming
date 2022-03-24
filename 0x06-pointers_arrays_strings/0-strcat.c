#include "main.h"
/**
 * *_strcat - function that concatenate two strings
 * @dest: string concat destination
 * @src: string concat source
 * Return: pointer to the outputed string
 */

char *_strcat(char *dest, char *src)
{
int len_, i = 0;

for (len_ = 0; dest[len_]; len_++)
;
while (src[i])
{
dest[len_++] = src[i];
i++;
}

return (dest);
}
