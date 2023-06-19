/**
 * main - main function
 * Description:  prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 * Return: 0
 *
 */

#include <stdio.h>

int main(void)
{
char chr = 'a';
while (chr <= 'z')
{
putchar(chr);
chr++;
}
putchar('\n');
chr = 'A';
while (chr <= 'Z')
{
putchar(chr);
chr++;
}
return (0);
}

