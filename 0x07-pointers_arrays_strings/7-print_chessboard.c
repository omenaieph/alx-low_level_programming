#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
int max_len = 8;

for (i = 0; i < max_len; i++)
{
for (j = 0; j < max_len; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
