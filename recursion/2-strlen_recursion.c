#include "main.h"
/**
*_strlen_recursion-Returns the lengh of a string.
*@s: The pointer s
*Return:Number of characters
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
