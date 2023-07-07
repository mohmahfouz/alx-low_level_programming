#include <stdio.h>

/**
 * main - prints no. of arguments
 * @argc: count of argument
 * @argv: vector of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int counter;
for (counter = 0; counter < argc;)
{
counter++;
(*argv)++;
}
printf("%d\n", counter - 1);
return (0);
}
