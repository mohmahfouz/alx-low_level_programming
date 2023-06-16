#include <stdio.h>

/**
* main - main function 
*
* Description: prints all the numbers of base 16 
* in lowercase, followed by a new line.
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
