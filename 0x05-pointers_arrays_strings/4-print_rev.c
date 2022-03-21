#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
int pos = 0;
while (s[pos])
	pos++;

while (pos--)
{
	_putchar(s[pos]);
}
_putchar('\n');

}
