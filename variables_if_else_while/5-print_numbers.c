#include <stdio.h>
/**
 * main - 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int num;

    num = 0;

    while (num <= 9)
    {
        putchar(num + '0');
        if (num < 9)
      
        num++;
    }
    putchar('\n');
    return (0);
}
