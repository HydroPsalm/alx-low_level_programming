#include "main.h"
/**
 * factorial - prints factorial n
 * @n: integer value
 * Return: recursion
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
