#include <stdio.h>
/**
 * main - main function
 *
 * Description: prints the lowercase alphabet in reverse
 * , followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
char chr;

for (chr = 'z'; chr >= 'a'; --chr)
{
putchar(chr);
}
putchar('\n');
return (0);
}
