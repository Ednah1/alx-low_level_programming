#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
*main - Assign a random number to n each time it is executed and print
*print whether the number stored in the variable n is positive or negative
*based a condition
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
