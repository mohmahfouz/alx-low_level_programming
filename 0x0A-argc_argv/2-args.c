#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
