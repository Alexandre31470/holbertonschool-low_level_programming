#include "main.h"
#include <stdio.h>
/**
 *_strlen - Return the lengh of a string.
 *@s:It is the pointer.
 *Return: 0 Success
 */
int _strlen(char *s)

{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
