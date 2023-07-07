#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - positive number addition
 * @argc: count
 * @argv: vector
 *
 * Return: 1 if symbol
 */

int main(int argc, char *argv[])
{
int a, b, addition = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[b][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
}
addition += atoi(argv[a]);
}
printf("%d\n", addition);
return (0);
}
