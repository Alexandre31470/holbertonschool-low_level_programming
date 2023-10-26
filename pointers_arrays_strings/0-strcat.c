#include "main.h"
/**
* _strcat - concatenate two strings.
*@dest: destination string  the source will be appended to
*@src: source string that will be appended to the destination
*Return: A pointer to the resulting string (dest).
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
