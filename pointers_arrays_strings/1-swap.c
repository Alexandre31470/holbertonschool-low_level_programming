#include "main.h"
/**
*swap_int - Swaps the values of two integers.
*@a:Pointers an integer.
*@b:Pointers an integer.
*return: 0 success
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
