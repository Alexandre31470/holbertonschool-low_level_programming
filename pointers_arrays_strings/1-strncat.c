#include "main.h"
/**
* _strncat - Concatenate two string.
* @dest: destination string  the source will be appended to
* @src: source string that will be appended to the destination
* @n: define the first n characters.
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
