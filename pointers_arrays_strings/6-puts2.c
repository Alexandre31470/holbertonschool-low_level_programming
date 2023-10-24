#include "main.h"
/**
*puts2 - Prints every characters of a string.
*@str : Char
*Not return
*/
void puts2(char *str)
{
int i = 0;

while (1)
{
if (str[i] == '\0')
break;
else if (i % 2 == 1)
i++;
else
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
