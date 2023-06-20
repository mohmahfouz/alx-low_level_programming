#include <stdio.h>

/**
 * main - main fucntion
 * Description: Prints the alphabet in lowercase, followed by a new line,
 * except for the letters q and e.
 * Only uses the `putchar` function.
 * Only uses two `putchar` calls.
 * Return: 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}

putchar('\n');
return (0);
}
