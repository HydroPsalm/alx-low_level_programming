#include <stdio.h>
/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
char lower_alpha = 'a';
char upper_alpha = 'A';
while (lower_alpha <= 'z') /*print lowercases a-z*/
{
putchar(lower_alpha);
lower_alpha++;
}
while (upper_alpha <= 'Z') /*print uppercase A-Z*/
{
putchar(upper_alpha);
upper_alpha++;
}
putchar('\n');
return (0); }
