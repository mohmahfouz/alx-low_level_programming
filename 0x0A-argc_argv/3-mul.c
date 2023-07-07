#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: vector
 * Return: 1 if receive two arguments
 */

int main(int argc, char *argv[])
{
int result;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(*(argv + 1)) * atoi(*(argv + 2));
printf("%d\n", result);
}
return (0);
}
