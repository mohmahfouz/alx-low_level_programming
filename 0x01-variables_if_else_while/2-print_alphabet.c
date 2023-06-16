#include <stdio.h>

/**
 * main - main function
 *
 * Description: a program that prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
