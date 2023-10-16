#include <stdio.h>
/**
  *main - prints all single digits
  *Return: 0
 */
int main(void)
{
    int num;

    for (num = 48; num < 58; num++)
    {
	putchar (num);
    }
    putchar('\n');
    return (0);
}
