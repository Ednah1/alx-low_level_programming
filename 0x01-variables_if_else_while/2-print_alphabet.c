#include <stdio.h>

/**
*main - Write a program that prints the alphabet in lowercase
*followed by a new line.
*Return: Always 0 (Success)
*/
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10); /* this is an ascii code for new line*/

return (0);
}
