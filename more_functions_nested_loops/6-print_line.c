#include "main.h"
/**
*print_line - draws a straight line in the terminal.
*@n: is the number
*Return: 0 (success)
*/
void print_line(int n)
{
while (!(n <= 0))
{
_putchar('_');
n--;
}
_putchar('\n');
}
