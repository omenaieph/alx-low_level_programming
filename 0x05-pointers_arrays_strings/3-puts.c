#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout
* @str: pointer parameter
* Return: void
*/
void _puts(char *str)
{
int pos = 0;
while (str[pos])
{
_putchar(str[pos]);
pos++;
}
_putchar('\n');
}
