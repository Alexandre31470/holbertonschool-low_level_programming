#include "main.h"
#include <stdlib.h>
/**
 * int _abs - Computes the absolute value of an integer
 * @n: The integer to be computed.
 * Return absolute value of an integer
 */
int _abs(int r)
{
if (r < 0)
r = -r;
if (r >= 0)
r = r;
return (r);
}
