#include "main.h"
/**
 * _puts_rev_recursion - prints string in reverse
 * @s - pointer to char
 */
void _puts_rev_recursion(char *s)
{
if (*s)
{_puts_rev_recursion(s + 1);
_putchar(*s);
}
}
