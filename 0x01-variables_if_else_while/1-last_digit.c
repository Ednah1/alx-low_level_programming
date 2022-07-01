#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*the last digit
*/
/*
*assign a random number to the variable n each time it is executed
*Return : always 0
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*
 * printf (last digit of "%d is ",n);
 *if (n > 5)
 * printf(greater than 5\n", n);
 * if (n == 0)
 * printf ("0");
 * if  (n < 6 && n !=0)
 * printf ("less than 6 not 0");
 */
return (0);
}
