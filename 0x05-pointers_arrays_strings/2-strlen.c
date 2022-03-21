#include "main.h"

/**
* _strlen - return the length of a string
* @s: pointer parameter
* Return: length of the string (integer)
*/
int _strlen(char *s)
{
int count = 0;

while (s[count])
{
count++;
}
return (count);
}
