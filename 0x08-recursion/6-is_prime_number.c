#include <stdio.h>
/**
 * prime_finder - determine prime number or not
 * @x: number
 * @y: number
 * Return: 1 if prime
 */
int prime_finder(int x, int y)
{
if (x == y)
return (1);
if (!(x % y))
return (0);
return (prime_finder(x, y + 1));
}
/**
 * is_prime_number - determine prime number or not
 * @n: number
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime_finder(n, 2));
}
