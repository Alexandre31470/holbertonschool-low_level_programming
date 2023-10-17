#include "main.h"
#include <stdlib.h>
/**
 * _abs - Computes the absolute value of an integer
 * @r: The integer to be computed.
 * Return :The absolute value of an integer
 */
int _abs(int r)
{
if (r < 0)
r = -r;
if (r >= 0)
r = r;
return (r);
}
